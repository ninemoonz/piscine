/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:44:04 by koodal            #+#    #+#             */
/*   Updated: 2025/06/30 14:51:52 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 26); // must use double quote since it's a string, and the size should equivalent to the number of characters which is 26.
}

void ft_print_alphabet_2(void) // using while loop to iterate from ascii value 'a' to 'z'
{
    char a;

    a = 'a';
    while (a <= 'z')
    {
        write(1, &a, 1);
        a++;
    }
}

int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    ft_print_alphabet_2();
    return (0);
}