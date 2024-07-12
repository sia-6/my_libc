#include "libc.h"

size_t	helper(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n)
	{
		len++;
		n /= 10;
	}
	return len;
}

char	*itoa(int n)
{
	char			*ptr;
	size_t			len;
	unsigned int	nbr;

	if (n == 0)
		return strdup("0");
	len = helper(n);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return NULL;
	nbr = n;
	if (n < 0)
		nbr = -n;
	while (nbr > 0)
	{
		ptr[--len] = '0' + (nbr % 10);
		nbr /= 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return ptr;
}
