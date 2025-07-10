/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:49:31 by koodal            #+#    #+#             */
/*   Updated: 2025/07/10 14:52:36 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0' || str == NULL)
    {
        return (NULL);
    }
    while (str[i] != '\0')
    {
        if (str[i] <= 65 || str[i] >= 90)
        {
            i++;
        }
        else
        {
            str[i] = str[i] + ('a' - 'A');
            i++;
        }
    }
    return (str);
}

int main(void)
{
    char str[] = "TMEKWMFLSK123123123.  DMFLEKMF";
    ft_strlowcase(str);
    printf("%s", str);
    return (0);
}