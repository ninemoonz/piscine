/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:30:20 by koodal            #+#    #+#             */
/*   Updated: 2025/07/01 11:53:10 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_nbr_printer(char a, char b)
{
    ft_putchar((a / 10) + '0');
    ft_putchar((a % 10) + '0');
    ft_putchar(' ');
    ft_putchar((b / 10) + '0');
    ft_putchar((b % 10) + '0');
    if (a == 98 && b == 99)
    {
        return;
    }
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = 1;
        while (b <= 99)
        {
            ft_nbr_printer(a, b);
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
    return (0);
}