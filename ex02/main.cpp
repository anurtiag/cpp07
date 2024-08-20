/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:06:01 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/20 14:55:19 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Templates.hpp"
#include "Array.hpp"

int main( void )
{
    int array[5] = {0,1,2,3,4};
    int* intptr = &array[0];
    std::string arr[3] = {"potato", "chickpea", "sweet potato"};
    std::string* strptr = &arr[0];
    iter(intptr, 5, ft_print<int>);
    iter(strptr, 3, ft_print<std::string>);
    return(0);
}