/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:00:30 by koodal            #+#    #+#             */
/*   Updated: 2025/08/07 16:45:58 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb == 1)
    {
        return (1);
    }
    while (i * i <= nb)
    {
        if (i * i == nb)
        {
            return (i);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    int nb;
    int result;

    nb = 9;
    result = ft_sqrt(nb);
    printf("%d", result);
    return (0);
}