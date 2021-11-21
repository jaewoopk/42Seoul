#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("my ft_isalpha upper case answer is %d\n", ft_isalpha('C'));
	printf("my ft_isalpha lower case answer is %d\n", ft_isalpha('c'));
	printf("my ft_isalpha that gets int answer is %d\n", ft_isalpha(580));
	printf("isalpha upper case answer is %d\n", isalpha('C'));
	printf("isalpha lower case answer is %d\n", isalpha('c'));
	printf("isalpha that gets int answer is %d\n", isalpha(580));
	return (0);
}
