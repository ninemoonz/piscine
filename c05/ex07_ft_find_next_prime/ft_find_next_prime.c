/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:36:55 by koodal            #+#    #+#             */
/*   Updated: 2025/08/12 15:24:54 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_check_prime(int nb)
{
    int i;

    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
    {
        return (2);
    }
    while (!ft_check_prime(nb))
    {
        if (ft_check_prime(nb))
        {
            return (nb);
        }
        nb++;
    }
    return (nb);
}

int main(void)
{
    int nb;
    int result;

    nb = 20;
    result = ft_find_next_prime(nb);
    printf("next prime: %d", result);
    return (0);
}