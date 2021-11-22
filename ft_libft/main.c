#include "libft.h"

int	main(void)
{
	char	dst[15] = "123456";
	char	src[5] = "abcd";

	printf("my ft_isalpha upper case answer is %d\n", ft_isalpha('C'));
	printf("my ft_isalpha lower case answer is %d\n", ft_isalpha('c'));
	printf("my ft_isalpha that gets int answer is %d\n\n\n", ft_isalpha(580));

	printf("isalpha upper case answer is %d\n", isalpha('C'));
	printf("isalpha lower case answer is %d\n", isalpha('c'));
	printf("isalpha that gets int answer is %d\n\n\n", isalpha(580));
	
	printf("dstsize = 1 , my ft_strlcat answer is %s , %zu\n", dst, ft_strlcat(dst,src,1));
	printf("dstsize = 7 , my ft_strlcat answer is %s , %zu\n", dst, ft_strlcat(dst,src,7));
	printf("dstsize = 9 , my ft_strlcat answer is %s , %zu\n", dst, ft_strlcat(dst,src,9));
	printf("dstsize = 11 , my ft_strlcat answer is %s , %zu\n\n\n", dst, ft_strlcat(dst,src,11));
	
	char	dest[15] = "123456";
	char	src2[5] = "abcd";
	
	printf("dstsize = 1 , real strlcat answer is %s , %zu\n", dest, strlcat(dest,src2,1));
	printf("dstsize = 7 , real strlcat answer is %s , %zu\n", dest, strlcat(dest,src2,7));
	printf("dstsize = 9 , real strlcat answer is %s , %zu\n", dest, strlcat(dest,src2,9));
	printf("dstsize = 11 , real strlcat answer is %s , %zu\n\n\n", dest, strlcat(dest,src2,11));
	
	char	dst3[15] = "123456";
	char	src3[5] = "abcd";

	printf("dstsize = 0 , my ft_strlcpy answer is %s, %zu\n", dst3, ft_strlcpy(dst3,src3,0));
	printf("dstsize = 6 , my ft_strlcpy answer is %s, %zu\n", dst3, ft_strlcpy(dst3,src3,6));
	printf("dstsize = 10 , my ft_strlcpy answer is %s, %zu\n\n\n", dst3, ft_strlcpy(dst3,src3,10));

	char	dst4[15] = "123456";
	char	src4[5] = "abcd";

	printf("dstsize = 0 , real strlcpy answer is %s, %zu\n", dst4, strlcpy(dst4,src4,0));	
	printf("dstsize = 6 , real strlcpy answer is %s, %zu\n", dst4, strlcpy(dst4,src4,6));
	printf("dstsize = 10 , real strlcpy answer is %s, %zu\n\n\n", dst4, strlcpy(dst4,src4,10));
	
	char	word[20] = "hello! my horse!";
	
	printf("we can find '' using my ft_strchr II%sII\n",ft_strchr(word, 0));
	printf("we can find '!' using my ft_strchr %s\n",ft_strchr(word, '!'));
	printf("we can find 'h' using my ft_strchr %s\n\n\n",ft_strchr(word, 'h'));

	printf("we can find '' using strchr II%sII\n",strchr(word, 0));
	printf("we can find '!' using strchr %s\n",strchr(word, '!'));
	printf("we can find 'h' using strchr %s\n\n\n",strchr(word, 'h'));

	printf("we can find '' using ft_strrchr %s\n",ft_strrchr(word, 0));
	printf("we can find '!' using ft_strrchr %s\n",ft_strrchr(word, '!'));
	printf("we can find 'h' using ft_strrchr %s\n\n\n",ft_strrchr(word, 'h'));
	
	printf("we can find '' using strrchr %s\n",strrchr(word, 0));
	printf("we can find '!' using strrchr %s\n",strrchr(word, '!'));
	printf("we can find 'h' using strrchr %s\n\n\n",strrchr(word, 'h'));

	char	sen[30] = "Hi, my name is jaewopar";

	printf("we can find 'H' in sen by ft_strnstr %s\n",ft_strnstr(sen, "H", 1));
	printf("we can find 'nam' in sen by ft_strnstr %s\n",ft_strnstr(sen, "nam", 10));
	printf("we can find 'jaewoo' in sen by ft_strnstr %s\n\n\n",ft_strnstr(sen, "jaewoo", 30));

	printf("we can find 'H' in sen by strnstr %s\n",strnstr(sen, "H", 1));
	printf("we can find 'nam' in sen by strnstr %s\n",strnstr(sen, "nam", 10));
	printf("we can find 'jaewoo' in sen by strnstr %s\n\n\n",strnstr(sen, "jaewoo", 30));
	
	char	arr[20] = {156,167,178, '\0'};
	char	src5[4] = {156,167,178, '\0'};
	char	src6[4] = {156,'a',178, '\0'};
	printf("'hello nice game' Are they same? My ft_strncmp's answer is %d.\n",ft_strncmp(arr , src5, 11));
	printf("'' Are they same? My ft_strncmp's answer is %d.\n",ft_strncmp(arr , src6, 4));
	printf("'hello nice' Are they same? My ft_strncmp's answer is %d.\n\n\n",ft_strncmp(arr , "hello nice", 2));
	
	
	printf("'hello nice game' Are they same? strncmp's answer is %d.\n",strncmp(arr , src5, 11));
	printf("'' Are they same? strncmp's answer is %d.\n",strncmp(arr , src6, 4));
	printf("'hello nice' Are they same? strncmp's answer is %d.\n\n\n",strncmp(arr , "hello nice", 2));

	char	memdst[20] = "1234";
	char	memsrc[20] = "abcdef";

	printf("memcpy size 0, my ft_memcpy answer is %s\n",(char *)ft_memcpy(memdst,memsrc,1));
	printf("memcpy size 5, my ft_memcpy answer is %s\n",(char *)ft_memcpy(memdst,memsrc,5));
	printf("memcpy size 8, my ft_memcpy answer is %s\n\n\n",(char *)ft_memcpy(memdst,memsrc,8));

	char	memdst2[20] = "1234";
	char	memsrc2[20] = "abcdef";

	printf("memcpy size 0, memcpy answer is %s\n",(char *)memcpy(memdst2,memsrc2,1));
	printf("memcpy size 5, memcpy answer is %s\n",(char *)memcpy(memdst2,memsrc2,5));
	printf("memcpy size 8, memcpy answer is %s\n\n\n",(char *)memcpy(memdst2,memsrc2,8));

	char	memmove1[20] = "black~!";
	char	memmove2[20] = "whiteshoe";

	printf("memmove size 0, ft_memmove answer is %s\n",(char *)ft_memmove(memmove1, memmove1 + 4, 0));
	printf("memmove size 5, ft_memmove answer is %s\n",(char *)ft_memmove(memmove1, memmove1 + 4, 5));
	printf("memmove size 15, ft_memmove answer is %s\n\n\n",(char *)ft_memmove(memmove1, memmove1 + 4, 15));
	
	char	memmove3[20] = "black~!";
	char	memmove4[20] = "whiteshoe";

	printf("memmove size 0, memmove answer is %s\n",(char *)memmove(memmove3, memmove3 + 4, 0));
	printf("memmove size 5, memmove answer is %s\n",(char *)memmove(memmove3, memmove3 + 4, 5));
	printf("memmove size 15, memmove answer is %s\n\n\n",(char *)memmove(memmove3, memmove3 + 4, 15));
	
	return (0);
}
