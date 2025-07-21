/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:54:30 by koodal            #+#    #+#             */
/*   Updated: 2025/07/10 15:45:47 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = str[i] - ('a' - 'A');
        i++;
    }
    while (str[i] != '\0')
    {
        if ((str[i] == ' ') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
        {
            str[i + 1] = str[i + 1] - ('a' - 'A');
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "capitalize this sentence. can you?";
    ft_strcapitalize(str);
    printf("%s", str);
    return (0);
}
