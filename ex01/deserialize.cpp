/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:39:46 by abechcha          #+#    #+#             */
/*   Updated: 2024/11/30 15:37:33 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deserialize.hpp"


Serializer::Serializer(){}
Serializer::~Serializer(){}
Serializer::Serializer(const Serializer & object){ (void)object;}
Serializer& Serializer::operator=(const Serializer & object){
    if (this == &object)
        return *this;
    return *this;
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}