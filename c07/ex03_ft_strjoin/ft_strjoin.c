/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:34:36 by koodal            #+#    #+#             */
/*   Updated: 2025/09/01 17:30:53 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int malloc_cal(int size, char **strs, char *sep)
{
    int i, j, total, sep_tot;

    i = 0;
    total = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            j++;
        }
        total = total + j;
        i++;
    }

    i = 0;
    while (sep[i])
    {
        i++;
    }
    sep_tot = (size - 1) * i;
    return (total + sep_tot);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i, j, l, o, joinlen;
    char *malloc_len;

    joinlen = malloc_cal(size, strs, sep);
    malloc_len = (char *)malloc((joinlen + 1) * sizeof(char));

    if (size == 0)
    {
        return (malloc_len);
        free(malloc_len);
    }
    i = 0;
    l = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            malloc_len[l] = strs[i][j];
            l++;
            j++;
        }
        o = 0;
        while (sep[o] && i < (size - 1))
        {
            malloc_len[l] = sep[o];
            l++;
            o++;
        }
        i++;
    }
    malloc_len[l] = '\0';
    return (malloc_len);
}

int main(void)
{
    int size;

    size = 4;
    char sep[5] = " = ";
    char *strs[4] = {"dog", "cat", "car", "sun"};
    char *result = ft_strjoin(size, strs, sep);
    printf("%s", result);
    return (0);
}