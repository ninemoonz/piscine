/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:22:48 by koodal            #+#    #+#             */
/*   Updated: 2025/08/14 17:34:15 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = argc - 1;
    while (i >= 1)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i--;
    }
    return (0);
}