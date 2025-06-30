/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:22:24 by koodal            #+#    #+#             */
/*   Updated: 2025/06/30 16:24:45 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    write(1, "0123456789", 10);
    write(1, "\n", 1);
}

void ft_print_numbers_2(void)
{
    int i;

    i = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_numbers();
    ft_print_numbers_2();
    return (0);
}