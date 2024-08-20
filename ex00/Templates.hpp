/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:00:59 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/20 12:03:35 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> void swap(T& a, T& b)
{
    T c = a;
    a = b;
    b = c;
}

template <typename T> T max(T& a, T& b)
{
    return((a > b) ? a : b);
}

template <typename T> T min(T& a, T& b)
{
    return((a < b) ? a : b);
}