/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:50:01 by koodal            #+#    #+#             */
/*   Updated: 2025/08/05 12:10:19 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
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
    result = nb * ft_recursive_factorial(nb - 1);
    return (result);
}

int main(void)
{
    int nb;

    nb = 6;
    printf("%d", ft_recursive_factorial(nb));
    return (0);
}