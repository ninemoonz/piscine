/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:36:55 by koodal            #+#    #+#             */
/*   Updated: 2025/08/11 13:47:41 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int i;

    if (nb == 0 || nb == 1)
    {
        return (0);
    }
    if (nb == 2)
    {
        return (1);
    }
    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }
}

int main(void)
{
    int nb;
    int result;

    nb = 6;
    result = ft_find_next_prime(nb);
    printf("next prime: %d", result);
    return (0);
}