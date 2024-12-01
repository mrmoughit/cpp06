/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:14:36 by abechcha          #+#    #+#             */
/*   Updated: 2024/11/26 08:55:06 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac , char **av)
{
    if (ac != 2)
        std::cout << "usage : ./convert <string> "<<  std::endl;
    else
        ScalarConverter::convert(av[1]);
}