/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:19:23 by abechcha          #+#    #+#             */
/*   Updated: 2024/11/30 15:21:36 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base *tst = NULL;
    int i = 10;
    while(i)
    {
        tst = generate();
        identify(tst);
        identify(*tst);
        i--;
        delete tst;
    }
}