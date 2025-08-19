/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 10:33:07 by koodal            #+#    #+#             */
/*   Updated: 2025/08/19 16:53:07 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void ft_swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] || s2[i])
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            return (s1[i] - s2[i]);
        }
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc > 1)
    {
        i = 1;
        while (i < argc - 1)
        {
            if (ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                ft_swap(&argv[i], &argv[i + 1]);
                i = 1;
            }
            else
            {
                i++;
            }
        }
        j = 1;
        while (j < argc)
        {
            ft_putstr(argv[j]);
            ft_putchar('\n');
            j++;
        }
    }
    return (0);
}