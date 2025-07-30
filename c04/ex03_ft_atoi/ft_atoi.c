/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:45:06 by koodal            #+#    #+#             */
/*   Updated: 2025/07/30 15:47:40 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i;
    int neg_flag;
    int num_convert;

    i = 0;
    neg_flag = 1;
    num_convert = 0;

    while (str[i])
    {
        if (str[i] >= 9 && str[i] <= 13 || (str[i] == ' '))
            i++;
        else if (str[i] == '-')
            neg_flag = neg_flag * -1;
        else if (str[i] == '+')
            i++;
        else if (str[i] >= '0' && str[i] <= '9')
        {
            num_convert = (num_convert * 10) + str[i] - 48;
        }
        else
        {
            return (num_convert * neg_flag);
        }
        i++;
    }
    return (num_convert * neg_flag);
}

int main(void)
{
    char str[30] = "-++--123asdf123";
    int result = atoi(str);
    int result2 = ft_atoi(str);
    printf("official atoi: %d\n", result);
    printf("ft_atoi: %d\n", result2);
    return (0);
}