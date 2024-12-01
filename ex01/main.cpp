/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:57:08 by abechcha          #+#    #+#             */
/*   Updated: 2024/11/30 16:53:47 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "deserialize.hpp"

int main()
{
    Data *data = new Data;
    data->value = 42;
    
    
    std::cout << data << std::endl;
    uintptr_t value = Serializer::serialize(data);
    Data * d = Serializer::deserialize(value);
    std::cout << d << std::endl;
    delete data;  
}