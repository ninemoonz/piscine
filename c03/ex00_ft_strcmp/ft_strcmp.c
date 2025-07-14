#include <unistd.h>
#include <stdio.h>

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

int main(void)
{
	char s1[] = "hello zorld";
	char s2[] = "hello world";
	int checker = ft_strcmp(s1, s2);
	printf("%i", checker);
	return (0);
}
