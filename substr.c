#include "libc.h"

char	*substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*sub;

	if (!s)
		return NULL;
	s_len = strlen(s + start);
	if (len > s_len)
		len = s_len;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return NULL;
	i = 0;
	if (start < strlen(s))
		while (i < len)
			sub[i++] = s[start++];
	sub[i] = '\0';
	return sub;
}
