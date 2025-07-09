/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 21:46:10 by koodal            #+#    #+#             */
/*   Updated: 2025/07/09 10:55:53 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

// strncpy do same as strcpy but only upto the number of characters that we assigned
// unsigned int n can be larger than src character. it will automatically put null terminator automatically at the end.
// but still, if the buffer size in dest is smaller than n, it will crash.
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i <= n)
    {
        dest[i] = src[i];
        i++;
    }
    // dest[i] = '\0' This is not expressed in strncpy.
    return (dest);
}

int main(void)
{
    char src[12] = "hello world";
    char dst[12];

    ft_strncpy(dst, src, 10);
    dst[11] = '\0';
    printf("ft_strncpy: %s\n", dst);

    strncpy(dst, src, 10);
    dst[11] = '\0';
    printf("strncpy: %s\n", dst);
    return (0);
}