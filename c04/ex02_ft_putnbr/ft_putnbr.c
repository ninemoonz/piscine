/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:41:26 by koodal            #+#    #+#             */
/*   Updated: 2025/07/26 17:34:58 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

int main(void)
{
    ft_putnbr(-232222);
    printf("\n");
    printf("%i\n", INT_MAX);
    printf("%i\n", INT_MIN);
    return (0);
}