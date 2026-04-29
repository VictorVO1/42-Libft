#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	return (0);
}

/* MEMSET
	char str1[20]; // 20 + '\0'
	char str2[20];

	for (int i = 0; i < 19; i++)
	{
		str1[i] = 'A';
		str2[i] = 'A';
	}
	str1[19] = '\0';
	str2[19] = '\0';

	memset(str1, 'B', 10);
	ft_memset(str2, 'B', 10);

	printf("Original: %s\n", str1);
	printf("ft_memset: %s\n", str2);
*/

/*MEMCPY
char	src[] = "Hola mundo";
	char	dst1[20];
	char	dst2[20];

	memcpy(dst1, src, 11);
	ft_memcpy(dst2, src, 11);

	printf("Original: %s\n", dst1);
	printf("ft_memcpy: %s\n", dst2);

	return (0);
*/

/*srtncmp
	char a[] = "56";
	char b[] = "564";
	printf("%d\n", ft_strncmp(a, b, 2));
	printf("%d\n", strncmp(a, b, 2));
	return (0);
*/