/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:50:50 by koodal            #+#    #+#             */
/*   Updated: 2025/08/09 17:35:34 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
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
    return (1);
}

int main(void)
{
    int prime;
    int result;

    prime = 11;
    result = ft_is_prime(prime);
    printf("%d", result);
    return (0);
}