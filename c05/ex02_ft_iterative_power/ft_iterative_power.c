/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:13:17 by koodal            #+#    #+#             */
/*   Updated: 2025/08/05 12:21:02 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;

    if (nb == 0 || power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    result = 1;
    while (power >= 1)
    {
        result *= nb;
        power--;
    }
    return (result);
}

int main(void)
{
    int nb;
    int power;
    int result;

    nb = 3;
    power = 3;
    result = ft_iterative_power(nb, power);
    printf("%d", result);
    return (0);
}