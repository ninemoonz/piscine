/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:53:17 by koodal            #+#    #+#             */
/*   Updated: 2025/07/17 16:44:13 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

// unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
// {
// }

void ft_strlcat_check(char *dest, char *src, unsigned int size)
{
    printf("%lu", strlcat(dest, src, size));
}

int main(void)
{
    char src[] = "Hello World";
    char dest[] = "Nice to meet you";

    ft_strlcat_check(dest, src, 4);
    return (0);
}