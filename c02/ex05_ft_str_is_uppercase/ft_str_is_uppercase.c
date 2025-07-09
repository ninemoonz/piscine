/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:21:08 by koodal            #+#    #+#             */
/*   Updated: 2025/07/09 11:36:50 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    if (str[0] == '\0' || str == NULL)
    {
        return (-1);
    }
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
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
    char alphabet[] = "HELLO";
    int checker = ft_str_is_uppercase(alphabet);
    printf("%i\n", checker);
    return (0);
}