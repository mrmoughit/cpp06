/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:39:50 by abechcha          #+#    #+#             */
/*   Updated: 2024/11/30 16:53:51 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DESERIALIZE_HPP
#define  DESERIALIZE_HPP

#include <stdint.h>
#include <iostream>
#include "Data.hpp"

class  Serializer{
    private:
        Serializer();
    public:
        Serializer(const Serializer &object);
        Serializer & operator = (const Serializer &object);
        ~Serializer();
        
        static Data* deserialize(uintptr_t raw);
        static uintptr_t serialize(Data* ptr);
};

#endif