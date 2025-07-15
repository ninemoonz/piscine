/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:41:16 by koodal            #+#    #+#             */
/*   Updated: 2025/07/15 14:09:13 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n - 1)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

void ft_checker(char *s1, char *s2, unsigned int n)
{
	printf("strncmp: %i\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %i\n", ft_strncmp(s1, s2, n));
}

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "HeIlo";
	printf("n is 1\n");
	ft_checker(str1, str2, 1);
	printf("\n");
	printf("n is 2\n");
	ft_checker(str1, str2, 2);
	printf("\n");
	printf("n is 3\n");
	ft_checker(str1, str2, 3);
	printf("\n");
	printf("n is 4\n");
	ft_checker(str1, str2, 4);
	printf("\n");
	return (0);
}
