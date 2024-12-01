/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   impl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:36:13 by abechcha          #+#    #+#             */
/*   Updated: 2024/11/30 15:23:44 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *  generate(void)
{
    srand(time(NULL));
    int i = (std::rand()) % 3;
    if (!i)
        return new A();
    else if (i == 1)
        return new B();
    else
        return new C();
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try{
        (void)dynamic_cast<A&>(p);
        std::cout << "A" <<std::endl;
    }catch(const std::exception &e){
    }
    try{
        (void)dynamic_cast<B&>(p);
        std::cout << "B" <<std::endl;
    }catch(const std::exception &e){
    }
    try{
        (void)dynamic_cast<C&>(p);
        std::cout << "C" <<std::endl;
    }catch(const std::exception &e){
    }
}
