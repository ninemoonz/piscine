/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:07:23 by koodal            #+#    #+#             */
/*   Updated: 2025/07/08 15:56:32 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;

    i = 0;
    while (i < size - 1)
    {
        j = i + 1;
        while (j <= size - 1)
        {
            if (tab[i] > tab[j])
            {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    int numArr[] = {3, 5, 4, 1, 2, 6, 9, 7, 8};
    int size;

    size = 9;
    ft_sort_int_tab(numArr, size);

    int i = 0;
    printf("sorted array: ");
    while (i < size)
    {
        printf("%i", numArr[i]);
        i++;
    }
    return (0);
}