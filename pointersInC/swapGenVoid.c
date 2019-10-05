#include <stdlib.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dst == src || n == 0)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

void	ft_genswap(void *a, void *b, size_t size)
{
	void	*temp;

	temp = malloc(size);
	ft_memcpy(temp, a, size);
	ft_memcpy(a, b, size);
	ft_memcpy(b, temp, size);
	free(temp);
}

int	main()
{
	int a = 3;
	int b = 4;
	char c1 = 'M';
	char c2 = 'N';
	size_t s;

	s = 1;
	printf("'a' value: %i\n'b' value: %i\n", a, b);
	ft_genswap(&a, &b, s);
	printf("after gen swap\n");
	printf("'a' value: %i\n'b' value: %i\n", a, b);
	printf("************************\n");
	printf("'c1' value: %c\n'c2' value: %c\n", c1, c2);
	ft_genswap(&c1, &c2, s);
	printf("after gen swap\n");
	printf("'c1' value: %c\n'c2' value: %c\n", c1, c2);

	return (0);
}
