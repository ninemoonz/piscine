/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 11:27:46 by koodal            #+#    #+#             */
/*   Updated: 2025/07/08 15:57:40 by koodal           ###   ########.fr       */
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

    printf("address of nbr: %p\n", &nbr);
    printf("nbr1 stores address of nbr which is: %p\n", nbr1);
    printf("address of nbr1: %p\n", &nbr1);
    printf("nbr2 stores address of nbr1 which is: %p\n", nbr2);
    printf("address of nbr2: %p\n", &nbr2);
    printf("address of nbr3: %p\n", &nbr3);
    printf("address of nbr4: %p\n", &nbr4);
    printf("address of nbr5: %p\n", &nbr5);
    printf("address of nbr6: %p\n", &nbr6);
    printf("address of nbr7: %p\n", &nbr7);
    printf("address of nbr8: %p\n", &nbr8);
    printf("address of nbr9: %p\n", &nbr9);
    return (0);
}