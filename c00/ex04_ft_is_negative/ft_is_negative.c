/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:26:06 by koodal            #+#    #+#             */
/*   Updated: 2025/06/30 16:28:36 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    if (n >= 0)
    {
        write(1, "P", 1); // when directly writing a character in the write function, use double quote
    }
    else
    {
        write(1, "N", 1);
    }
}

int main(void)
{
    ft_is_negative(-3);
}