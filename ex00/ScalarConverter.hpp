/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 07:56:59 by abechcha          #+#    #+#             */
/*   Updated: 2024/11/30 15:58:56 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>
#include <iomanip>
#include <sstream> 

class LogicError : public std::exception {
    public:
        const char* what() const throw();   
};

class ScalarConverter{
    private:
        ScalarConverter();
    public:
        ScalarConverter(const ScalarConverter &object);
        ScalarConverter & operator = (const ScalarConverter &object);
        ~ScalarConverter();
        
        static void convert(const std::string &str);
};

#endif