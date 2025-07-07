/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:10:17 by koodal            #+#    #+#             */
/*   Updated: 2025/07/07 12:22:15 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int nbr1;
    int nbr2;
    int div;
    int mod;

    nbr1 = 10;
    nbr2 = 3;
    ft_div_mod(nbr1, nbr2, &div, &mod);
    printf("value in div: %i\nvalue in mod: %i", div, mod);
    return (0);
}