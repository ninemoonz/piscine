/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:32:51 by koodal            #+#    #+#             */
/*   Updated: 2025/07/15 16:18:45 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i])
    {
        i++;
    }
    while (j < nb)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
void ft_compare(char *str1, char *str2, unsigned nb)
{
    char cpy1[50];
    char cpy2[50];

    strcpy(cpy1, str1);
    strcpy(cpy2, str1);

    printf("original: %s\n", strncat(cpy1, str2, nb));
    printf("my func: %s\n", ft_strncat(cpy2, str2, nb));
}

int main(void)
{
    char dest[10] = "Hello ";
    char src[10] = "World";

    ft_compare(dest, src, 10);
    return (0);
}