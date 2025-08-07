/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:39:17 by koodal            #+#    #+#             */
/*   Updated: 2025/08/07 15:59:22 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return (-1);
    }
    if (index == 0)
    {
        return (0);
    }
    if (index == 1 || index == 2)
    {
        return (1);
    }
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
    int i;
    int result;

    i = 10;
    result = ft_fibonacci(i);
    printf("%d", result);
    return (0);
}