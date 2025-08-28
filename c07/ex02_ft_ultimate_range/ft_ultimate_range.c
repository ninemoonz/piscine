/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:11:57 by koodal            #+#    #+#             */
/*   Updated: 2025/08/28 15:34:34 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    if (min >= max)
    {
        return (0);
    }
    *range = (int *)malloc((max - min) * sizeof(int));
    if (range == NULL)
        return (-1);

    i = 0;
    while (i < (max - min))
    {
        (*range)[i] = min + i;
        i++;
    }
    return (i);
}

int main(void)
{
    int min, max, result;
    int *num_arr;

    min = 7;
    max = 15;
    result = ft_ultimate_range(&num_arr, min, max);
    printf("size of range is: %d\n", result);
    for (int i = 0; i < result; i++)
        printf("%d ", num_arr[i]);
    if (result > 0)
        free(num_arr);
    return (0);
}