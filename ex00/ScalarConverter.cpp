/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 08:00:06 by abechcha          #+#    #+#             */
/*   Updated: 2024/11/30 16:45:13 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

const char* LogicError::what() const throw(){
        return ("Logic Error occurred!");
}

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &object){
    (void)object;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &object){
    if (this == &object)    
        return *this;
    return *this;
}

int check_special_literal(const std::string & str)
{
    if (str== "-inff" || str == "-inf" || str == "+inf" || str == "nan" || str == "nanf" || str == "+inff")
        return 1;
    return 0;
}

void print_special_literal(const std::string & str )
{
    if (str == "-inff" || str == "+inff" || str == "nanf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int  : impossible" << std::endl;
        std::cout << "float  : " <<  str <<std::endl;
        std::cout << "double  : " <<  str.substr(0 , str.size() -1) <<std::endl;
    }
    else if (str == "-inf" || str == "+inf" || str == "nan")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int  : impossible" << std::endl;
        std::cout << "float  : " <<  str  << "f" <<std::endl;
        std::cout << "double  : " <<  str <<std::endl;
    }
}

void print_as_char(const std::string& str)
{
    try{
        if (str.size() == 1 && isalpha(str[0]))
        {
            if (std::isprint(str[0]))
                std::cout << "char : '" << str[0] << "'"<< std::endl;
        }
        else if (str.size() == 1 && isprint(str[0]) && !isdigit(static_cast<int>(str[0])))
            std::cout << "char : '" << str[0] << "'"<< std::endl;
        else
        {
            int i = 0;
            std::istringstream ss(str);
            ss >> i;
            if (ss.fail())
                throw LogicError();
            if (i < 0 || 127 <=  i)
                std::cout << "char: impossible "<< std::endl;
            else if (std::isprint(static_cast<char>(i)))
                std::cout << "char : '" <<  static_cast<char>(i) << "'" << std::endl;
            else
                std::cout << "char: Non displayable "<< std::endl;
        }
    }
    catch(const std::exception &e)
    {
        std::cout << "char: impossible "<< std::endl;
    }
}   


void print_as_int(const std::string & str)
{
    try{
        if (str.size() == 1 && isascii(str[0]))
            std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
        else{
            int i = 0;
            std::istringstream ss(str);
            ss >> i;
            if (ss.fail())
                throw LogicError();
            std::cout << "int :" << i << std::endl;
        }
    }
    catch(const std::exception &e){
        std::cout << "int : impossible" << std::endl;
    }
}

void print_as_float(const  std::string & str)
{
    try{
        float f = 0;
        if (str.size() == 1 && isascii(str[0]))
            f = static_cast<float>(str[0]);
        else
        {
            std::string tmp = str;
            if (tmp.back() == 'f')  
                tmp.pop_back();
            std::istringstream ss(tmp);
            ss >> f;
            if (ss.fail())
                throw LogicError();
        }
        std::cout << "float :" << f << ".0f" << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << "float : impossible" << std::endl;
    }
}

void  print_as_double(const std::string & str)
{
    try{
        if (str.size() == 1 && isascii(str[0]))
            std::cout << "double : " << static_cast<int>(str[0]) << ".0"<< std::endl;
        else{
            double i = 0;
              std::string tmp = str;
            if (tmp.back() == 'f')
                tmp.pop_back();
            std::istringstream ss(tmp);
            ss >> i;
            if (ss.fail())
                throw LogicError();
            std::cout << "double : " << i << ".0"<< std::endl;
        }
    }
    catch(const std::exception &e)
    {
        std::cout << "double : impossible" << std::endl;
    }
}

void     ScalarConverter::convert(const std::string & str)
{
    try{
        if (check_special_literal(str))
            print_special_literal(str);
        else{
            print_as_char(str);
            print_as_int(str);
            print_as_float(str);
            print_as_double(str);
        }
    }
    catch(const std::exception &e){
        std::cout << "Error "<< e.what() << std::endl;
    }
}
