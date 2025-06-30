/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:39:39 by koodal            #+#    #+#             */
/*   Updated: 2025/06/30 14:42:29 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) // basic structure of a function. return type, function name, and parameter (or parameters)
{
    write(1, &c, 1); // write function from unistd.h which each parameter stands for standard output, address of variable c, and the size of it.
}

int main(void)
{
    char b = 'b';
    ft_putchar('a'); // How to call the function.
    ft_putchar(b);
    return (0);
}