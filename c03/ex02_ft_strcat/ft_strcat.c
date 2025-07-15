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
	char cpy1[50];
	char cpy2[50];

	strcpy(cpy1, str1);
	strcpy(cpy2, str1);

	printf("original: %s\n", strcat(cpy1, str2));
	printf("my func: %s\n", ft_strcat(cpy2, str2));
}

int main(void)
{
	char str1[] = "This is my ";
	char str2[] = "Codam";
	ft_compare(str1, str2);
	return (0);
}
