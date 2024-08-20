/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:25:40 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/20 15:23:26 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    this->array = new[0];
    this->length = 0;
}

template <typename T> Array<T>::Array(const unsigned int& length)
{
    this->array = new[length];
    this->length = length;
}

template <typename T> Array<T>::Array(const Array<T>& source)
{
    *this = source;
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T>& source)
{
    delete[] this->array;
    this.
}