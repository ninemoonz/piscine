/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:18:55 by koodal            #+#    #+#             */
/*   Updated: 2025/08/05 14:36:49 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int result;

    if (power == 0)
    {
        return (1);
    }
    result = nb * ft_recursive_power(nb, (power - 1));
    return (result);
}

int main(void)
{
    int n;
    int p;
    int result;

    n = 2;
    p = 3;
    result = ft_recursive_power(n, p);
    printf("%d", result);
    return (0);
}