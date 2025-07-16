/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:17:30 by koodal            #+#    #+#             */
/*   Updated: 2025/07/16 12:50:04 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *tofind)
{
    int i;
    int j;

    if (*tofind == '\0')
    {
        return (str);
    }
    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == tofind[j])
        {
            j++;
            if (tofind[j] == '\0')
            {
                return (&str[i]);
            }
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char haystack[] = "";
    char needle[] = "";
    printf("ft_strstr: %s\n", ft_strstr(haystack, needle));
    printf("strstr: %s\n", strstr(haystack, needle));
    return (0);
}