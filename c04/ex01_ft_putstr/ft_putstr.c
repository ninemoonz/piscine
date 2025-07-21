/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:27:35 by koodal            #+#    #+#             */
/*   Updated: 2025/07/21 13:39:13 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void ft_putstr(char *str)
{
    int i;
    int strlen;

    i = 0;
    strlen = ft_strlen(str);
    write(1, str, strlen);
}

int main(void)
{
    char str[] = "Hello World. What should I have for dinner today?";
    ft_putstr(str);
    return (0);
}