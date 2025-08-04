/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:44:18 by koodal            #+#    #+#             */
/*   Updated: 2025/08/01 17:54:16 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        i++;
    }
    return (i);
}

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

void ft_putnbr_base(int nbr, char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return;
        i++;
    }

    if (i < 2)
        return;

    // if (doubleChar(base))
    //     return;

    if (nbr < 0)
    {
        nbr = -nbr;
        write(1, "-", 1);
    }
    int strlen;

    strlen = ft_strlen(base);
    if (nbr > strlen)
    {
        ft_putnbr_base(nbr / strlen, base);
    }

    char baseSymbol;

    baseSymbol = base[nbr % strlen];
    while (*base != baseSymbol)
    {
        base++;
    }
    printf("%c", *base);
}

void ft_atoi_base(char *str, char *base)
{
    int atoi_value;

    atoi_value = ft_atoi(str);
    ft_putnbr_base(atoi_value, base);
}

int main(void)
{
    char str[] = "   +-----123abc";
    char decimal[] = "0123456789";
    char binary[] = "10";
    char hex[] = "0123456789abcdef";
    char octal[] = "poneyvif";

    ft_atoi_base(str, hex);
    return (0);
}