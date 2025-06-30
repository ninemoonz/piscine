/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:59:54 by koodal            #+#    #+#             */
/*   Updated: 2025/06/30 15:01:37 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char z;

    z = 'z';
    while (z >= 'a')
    {
        write(1, &z, 1);
        z--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}