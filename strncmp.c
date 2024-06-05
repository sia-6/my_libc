#include "libc.h"

int	strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	u1;
	unsigned char	u2;

	while (len--)
	{
		u1 = (unsigned char)*s1++;
		u2 = (unsigned char)*s2++;
		if (u1 != u2)
			return u1 - u2;
		if (u1 == '\0')
			return 0;
	}
	return 0;
}
