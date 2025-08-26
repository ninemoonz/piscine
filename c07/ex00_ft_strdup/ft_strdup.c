/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:33:16 by koodal            #+#    #+#             */
/*   Updated: 2025/08/26 14:58:44 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> // library for malloc function

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    int i;
    int srclen;
    char *dup;

    i = 0;
    srclen = ft_strlen(src);
    dup = (char *)malloc(srclen * sizeof(char));
    if (dup == NULL)
        return (NULL);
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int main(void)
{
    char str[20] = "Hello Codam";
    printf("source string: %s\n", str);
    printf("duplicated string: %s\n", ft_strdup(str));

    return (0);
}
