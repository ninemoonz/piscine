/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:00:28 by koodal            #+#    #+#             */
/*   Updated: 2025/08/26 17:10:57 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
    int i, range;
    int *num_arr;

    i = 0;
    if (min >= max)
        return (0);
    range = max - min;
    num_arr = (int *)malloc(range * sizeof(int));
    while (min < max)
    {
        num_arr[i] = min;
        min++;
        i++;
    }
    return (num_arr);
}

int main(void)
{
    int min, max, i;

    min = -2;
    max = 9;
    i = 0;

    int *result = ft_range(min, max);
    while (i < (max - min))
    {
        printf("%d", result[i]);
        i++;
    }
    // result should show {2, 3, 4, 5, 6, 7, 8}
    return (0);
}