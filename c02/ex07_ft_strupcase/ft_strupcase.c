/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:13:16 by koodal            #+#    #+#             */
/*   Updated: 2025/07/10 11:07:17 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0' || str == NULL)
    {
        return (NULL);
    }
    while (str[i] != '\0')
    {
        if (str[i] < 97 || str[i] > 122)
        {
            i++;
        }
        else
        {
            str[i] = str[i] - ('a' - 'A');
            i++;
        }
    }
    return (str);
}

int main(void)
{
    char str[] = "hello world this is 9m00nz.  what a nice day!";
    ft_strupcase(str);
    printf("%s\n", str);
    return (0);
}