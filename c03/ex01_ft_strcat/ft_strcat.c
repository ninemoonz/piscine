#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void ft_compare(char *str1, char *str2)
{
	printf("original: %s\n", strcat(str1, str2));
	printf("my func: %s\n", ft_strcat(str1, str2));
}

int main(void)
{
	char str1[] = "hello ";
	char str2[] = "world!";
	ft_compare(str1, str2);
	return (0);
}
