/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:09:05 by koodal            #+#    #+#             */
/*   Updated: 2025/07/09 14:12:03 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    if (str[0] == '\0' || str == NULL)
    {
        return (-1);
    }
    i = 0;
    while (str[i])
    {
        if (str[i] >= 32 && str[i] <= 126)
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
    char printable[] = "how about301()#)@$#\"\"\"\"\"(&$)#*$&@*(#&$())";
    int checker = ft_str_is_printable(printable);
    printf("%i", checker);
    return (0);
}