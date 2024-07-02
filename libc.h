#include <stdlib.h>
#include <stdio.h>

int	atoi(const char *str);
int isalpha(int c); 
int isalnum(int c); 
int isdigit(int c); 
int isprint(int c); 
int isascii(int c);
int toupper(int c);
int tolower(int c);
size_t strlen(const char *s);
int	strncmp(const char *s1, const char *s2, size_t len);
size_t	strlcpy(char *dst, const char *src, size_t dstsize);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
size_t	strlcat(char *dst, const char *src, size_t dstsize);
char	*strnstr(const char *haystack, const char *needle, size_t len);
char	*strjoin(char const *s1, char const *s2);
char	*substr(char const *s, unsigned int start, size_t len);
void *memcpy(void *dst, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memset(void *b, int c, size_t len);
void	*memmove(void *dst, const void *src, size_t len);
void	*memchr(const void *s, int c, size_t n);
void	*calloc(size_t count, size_t size);

typedef struct s_list
{
  void			*content;
  struct s_list	*next;
} list;

list *list_new(void *content);
void	list_add_back(list **lst, list *new);
void	list_add_front(list **lst, list *new);
void	list_clear(list **lst, void (*del)(void*));
void	list_delete_one(list *lst, void (*del)(void *));
int	list_size(list *lst);
