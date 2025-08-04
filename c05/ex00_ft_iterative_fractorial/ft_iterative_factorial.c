/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:24:20 by koodal            #+#    #+#             */
/*   Updated: 2025/08/04 16:47:00 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result;

    if (nb < 0 || nb > 12)
    {
        return (0);
    }
    if (nb == 0 || nb == 1)
    {
        return (1);
    }
    result = 1;
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }
    return (result);
}

int main(void)
{
    int factorial;

    factorial = ft_iterative_factorial(5);
    printf("factorial of 5 is %d\n", factorial);
    return (0);
}