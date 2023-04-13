/*
Function name:
    ft_strmapi
Prototype:
    char *ft_strmapi(char const *s, char (*f)(unsigned
    int, char));
Parameters:
    s: The string on which to iterate.
    f: The function to apply to each character.
    Return value The string created from the successive applications
    of ’f’.
    Returns NULL if the allocation fails.
External functs.
    malloc
Description:
    Applies the function ’f’ to each character of the
    string ’s’, and passing its index as first argument
    to create a new string (with malloc(3)) resulting
    from successive applications of ’f’.
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}