/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:58:47 by koodal            #+#    #+#             */
/*   Updated: 2025/07/07 12:09:12 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a; // temp is 10
    *a = *b;   // a is 20
    *b = temp; // b is 10;
}

int main(void)
{
    int nbr1;
    int nbr2;

    nbr1 = 1;
    nbr2 = 2;
    ft_swap(&nbr1, &nbr2);
    printf("nbr1 is %i\nnbr2 is %i\n", nbr1, nbr2);

    return (0);
}