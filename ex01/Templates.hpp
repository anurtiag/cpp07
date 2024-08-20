/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:00:59 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/20 12:07:28 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> void ft_print(T& data)
{
    std::cout << data << std::endl;
}

template <typename T, typename F> void iter(T* array, int length, F function)
{
    for (int i = 0; i < length; i++)
        function(array[i]);
}
