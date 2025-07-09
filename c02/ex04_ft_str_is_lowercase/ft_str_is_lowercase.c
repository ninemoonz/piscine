/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:21:08 by koodal            #+#    #+#             */
/*   Updated: 2025/07/09 11:26:03 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    if (str[0] == '\0')
    {
        return (-1);
    }
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}

int main(void)
{
    char lowerArr[] = "";
    int checker = ft_str_is_lowercase(lowerArr);
    printf("%i\n", checker);
    return (0);
}