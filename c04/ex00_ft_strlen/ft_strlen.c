/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:45:55 by koodal            #+#    #+#             */
/*   Updated: 2025/07/17 16:51:31 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    if (str == NULL)
    {
        return (-1);
    }
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void ft_check(char *str)
{
    printf("this is ft_strlen result: %d\n", ft_strlen(str));
    printf("this is strlen result: %lu\n", strlen(str));
}
int main(void)
{
    char str[] = "This is a string";
    ft_check(str);
    return (0);
}