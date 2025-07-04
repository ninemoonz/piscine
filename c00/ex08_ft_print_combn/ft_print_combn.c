/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:50:17 by koodal            #+#    #+#             */
/*   Updated: 2025/07/04 16:32:09 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
    int tab[10];
    char *ptr;

    if (n < 1 || n > 9)
    {
        return;
    }
    ptr = malloc((sizeof(char) * n) + 1);
    i = 0;
    while (i < n)
    {
        ptr[i] = i + '0';
        printf("%c", ptr[i]);
        i++;
    }
    ptr[i] = '\0';
}

int main(void)
{
    ft_print_combn(3); // going to make 3 digit unique comb lists.
    return (0);
}