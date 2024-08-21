/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:25:37 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/21 06:51:17 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cstdlib>
# include <ctime>

template <typename T> class Array
{
    private:
        unsigned int length;
        T* array;
    public:
        Array();
        Array(const unsigned int& length);
        Array(const Array<T>& source);
        Array<T>& operator=(const Array<T>& source);
        T& operator[](int i);
        unsigned int size();
        void OutOfRangeException(int i);
        ~Array();
};

#endif