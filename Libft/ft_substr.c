/*
Function name:
    ft_substr
Prototype: 
    char *ft_substr(char const *s, unsigned int start,size_t len);
Parameters:
    s: The string from which to create the substring.
    start: The start index of the substring in the string ’s’.
    len: The maximum length of the substring.
Return value:
    The substring.
    NULL if the allocation fails.
External functs: 
    malloc
Description:
    Allocates (with malloc(3)) and returns a substring
    from the string ’s’.
    The substring begins at index ’start’ and is of
    maximum size ’len’.
*/
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
