/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:44:00 by koodal            #+#    #+#             */
/*   Updated: 2025/06/30 19:47:36 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_nbr_printer(char a, char b, char c)
{
    ft_putchar(a + '0');
    ft_putchar(b + '0');
    ft_putchar(c + '0');
    if (a == 7 && b == 8 && c == 9)
    {
        return;
    }
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = 0;
    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                ft_nbr_printer(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}