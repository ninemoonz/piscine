/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:54:46 by koodal            #+#    #+#             */
/*   Updated: 2025/07/01 12:43:08 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int b)
{
    if (b == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (b < 0)
    {
        b = -b;
        ft_putchar('-');
    }
    if (b >= 10)
    {
        ft_putnbr(b / 10);
        ft_putnbr(b % 10);
    }
    else
    {
        ft_putchar(b + '0');
    }
}

int main(void)
{
    ft_putnbr(22);
    write(1, "\n", 1);
    return (0);
}