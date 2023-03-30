/*
The bzero() function erases the data in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.
*/
void	*ft_bzero(void *str, size_t len)
{
	char	*p;

	p = (char *)str;
	while (len > 0)
	{
		p[len - 1] = 0;
		len--;
	}
	return (str);
}
