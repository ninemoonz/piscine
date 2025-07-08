/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:14:19 by koodal            #+#    #+#             */
/*   Updated: 2025/07/08 10:19:50 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}

int main(void)
{
    int nbr1;
    int nbr2;

    nbr1 = 10;
    nbr2 = 3;
    printf("nbr1: %i, nbr2: %i\n", nbr1, nbr2);
    ft_ultimate_div_mod(&nbr1, &nbr2);
    printf("nbr1: %i, nbr2: %i\n", nbr1, nbr2);
    return (0);
}