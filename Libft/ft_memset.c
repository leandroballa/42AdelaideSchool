/*
The C library function void *memset(void *str, int c, size_t n) copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.
*/
void	*ft_memset(void *str, int c, size_t len)
{
	char	*p;

	p = (char *)str;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (str);
}
