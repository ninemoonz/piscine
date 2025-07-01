/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:50:17 by koodal            #+#    #+#             */
/*   Updated: 2025/07/01 14:09:40 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void ft_print_combn(int n)
{
    int i;

    i = 1;
    while (n > 1)
    {
        while (i <= n)
        {
            ft_putnbr(i);
            i++;
        }
        n--;
    }
}

int main(void)
{
    ft_print_combn(4); // going to make 3 digit unique comb lists.
    return (0);
}