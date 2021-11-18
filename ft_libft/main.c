#include "libft.h"

int	main(void)
{
	char	dst[15] = "123456";
	char	src[5] = "abcd";

	printf("my ft_isalpha upper case answer is %d\n", ft_isalpha('C'));
	printf("my ft_isalpha lower case answer is %d\n", ft_isalpha('c'));
	printf("my ft_isalpha that gets int answer is %d\n", ft_isalpha(580));
	printf("isalpha upper case answer is %d\n", isalpha('C'));
	printf("isalpha lower case answer is %d\n", isalpha('c'));
	printf("isalpha that gets int answer is %d\n", isalpha(580));
	
	printf("dstsize = 1 , my ft_strlcat answer is %s , %zu\n", dst, ft_strlcat(dst,src,1));
	printf("dstsize = 7 , my ft_strlcat answer is %s , %zu\n", dst, ft_strlcat(dst,src,7));
	printf("dstsize = 9 , my ft_strlcat answer is %s , %zu\n", dst, ft_strlcat(dst,src,9));
	printf("dstsize = 11 , my ft_strlcat answer is %s , %zu\n", dst, ft_strlcat(dst,src,11));
	
	char	dest[15] = "123456";
	char	src2[5] = "abcd";
	
	printf("dstsize = 1 , real strlcat answer is %s , %zu\n", dest, strlcat(dest,src2,1));
	printf("dstsize = 7 , real strlcat answer is %s , %zu\n", dest, strlcat(dest,src2,7));
	printf("dstsize = 9 , real strlcat answer is %s , %zu\n", dest, strlcat(dest,src2,9));
	printf("dstsize = 11 , real strlcat answer is %s , %zu\n", dest, strlcat(dest,src2,11));
	
	char	dst3[15] = "123456";
	char	src3[5] = "abcd";

	printf("dstsize = 1 , my ft_strlcpy answer is %s, %zu\n", dst3, strlcpy(dst3,src3,1));
	printf("dstsize = 3 , my ft_strlcpy answer is %s, %zu\n", dst3, strlcpy(dst3,src3,3));
	printf("dstsize = 6 , my ft_strlcpy answer is %s, %zu\n", dst3, strlcpy(dst3,src3,6));

	char	dst4[15] = "123456";
	char	src4[5] = "abcd";

	printf("dstsize = 1 , real strlcpy answer is %s, %zu\n", dst4, strlcpy(dst4,src4,1));	
	printf("dstsize = 3 , real strlcpy answer is %s, %zu\n", dst4, strlcpy(dst4,src4,3));
	printf("dstsize = 6 , real strlcpy answer is %s, %zu\n", dst4, strlcpy(dst4,src4,6));
	return (0);
}
