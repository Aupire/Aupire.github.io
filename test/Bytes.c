#include<unistd.h>

int	main()
{
	char c = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

	write(1, &c, 127);
}

