/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:50:17 by koodal            #+#    #+#             */
/*   Updated: 2025/07/01 12:53:47 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n)
{
    int i;

    i = 0;
    if (n < 0 || n > 10)
    {
        return;
    }
    while (i <= n)
    {
        }
}

int main(void)
{
    ft_print_combn(3); // going to make 3 digit unique comb lists.
    return (0);
}