int	ft_strncmp(char *s1, char *s2, unsigned int n)		
{
	unsigned int i;
	int c;

	i = 0;
	c = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (c);
		else if (s1[i] != s2[i])
		{
			c = s1[i] - s2[i];
			return (c);
		}
		else if (s1[i] == s2[i])
			i++;
	}
	return (c);
}



#include <stdio.h>
#include <string.h>

int main()
{
	char sA[] = "";
	char sB[] = "";
	int a = 100;


	printf("%d\n", ft_strncmp(sA, sB, a));
	printf("%d\n", strncmp(sA, sB, a));
	return (0);
}
