/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:35:06 by koodal            #+#    #+#             */
/*   Updated: 2025/07/08 11:59:00 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int swap;
    int i;

    i = 0;
    while (i <= (size / 2))
    {
        swap = tab[size - 1 - i];
        tab[size - 1 - i] = tab[i];
        tab[i] = swap;
        i++;
    }
}

int main(void)
{
    int numArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size;

    size = 11;

    int i;
    i = 0;
    ft_rev_int_tab(numArray, size);
    while (i < size) // it doesn't work like this because it is not string!
    {
        printf("%i", numArray[i]);
        i++;
    }
    return (0);
}