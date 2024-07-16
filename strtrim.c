#include "libc.h"

char	*strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trimmed;

	if (!s1 || !set)
		return NULL;
	while (*s1 && strchr(set, *s1))
		s1++;
	len = strlen(s1);
	while (len && strchr(set, s1[len]))
		len--;
	trimmed = substr(s1, 0, len + 1);
	return trimmed;
}
