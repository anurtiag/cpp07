/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:25:40 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/21 06:53:06 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    this->array = new T[0];
    this->length = 0;
}

template <typename T> Array<T>::Array(const unsigned int& length)
{
    this->array = new T[length];
    this->length = length;
}

template <typename T> Array<T>::Array(const Array<T>& source)
{
    *this = source;
}

template <typename T> unsigned int Array<T>::size()
{
    return(this->length);
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T>& source)
{
    delete[] this->array;
    this->length = source.size();
    this->array = new T[this->length];
    for(int i = 0; i < this->length; i++)
        this->array[i] = source.array[i];
    return(*this);
}

template <typename T> T& Array<T>::operator[](int i)
{
    try
    {
        this->OutOfRangeException(i);
        return(this->array[i]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

template <typename T> void Array<T>::OutOfRangeException(int i)
{
    if(i > this->length)
        throw std::invalid_argument("this position is out of range");
}

template <typename T> Array<T>::~Array()
{
    delete[] this->array;
}