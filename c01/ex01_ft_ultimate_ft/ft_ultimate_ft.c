/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:27:46 by koodal            #+#    #+#             */
/*   Updated: 2025/07/07 11:43:34 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int nbr = 1;
    int *nbr1 = &nbr;
    int **nbr2 = &nbr1;
    int ***nbr3 = &nbr2;
    int ****nbr4 = &nbr3;
    int *****nbr5 = &nbr4;
    int ******nbr6 = &nbr5;
    int *******nbr7 = &nbr6;
    int ********nbr8 = &nbr7;
    int *********nbr9 = &nbr8;

    printf("original number: %i\n", nbr);
    ft_ultimate_ft(nbr9);
    printf("after passing in to a function: %i\n", nbr);
    return (0);
}