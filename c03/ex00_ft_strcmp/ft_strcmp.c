#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void ft_check(char *s1, char *s2)
{
	int ft_check;
	int off_check;

	ft_check = ft_strcmp(s1, s2);
	off_check = strcmp(s1, s2);
	printf("ft_strcmp result: %i\n", ft_check);
	printf("official strcmp result: %i\n", off_check);
}

int main(void)
{
	char s1[] = "asdlfkasdlfkasjdf";
	char s2[] = "asdlfkasdlfkasjdf";
	ft_check(s1, s2);
	return (0);
}
