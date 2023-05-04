#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_substr_ana(char const *s, unsigned int star, size_t len);

int main(void) {
    char str[] = "FQ71UcBAtT ZxIMs6i4z 1l3K9rjy kfeuWa9n4Smv 47edu";
    char *sub = ft_substr(str, 4, 1);
	char *ana = ft_substr_ana(str, 4, 1);

    printf("Original string: %s\n", str);
    printf("Substring Leandro: %s\n", sub);
	printf("Substring Ana: %s\n", ana);

    free(sub);
    return 0;
}

size_t ft_strlen(char const *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *str;
    size_t i;
    size_t l;

    l = ft_strlen(s);
    if (start > l)
        return NULL;
    if (len > l - start)
        len = l - start;
    if (l == 0)
        return NULL;
    else {
        str = malloc(sizeof(char) * (len + 1));
        if (str == NULL)
            return NULL;
        i = 0;
        while (i < len) {
            *(str + i) = *(s + start + i);
            i++;
        }
        *(str + i) = '\0';
        return str;
    }
}

char *ft_substr_ana(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	k;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		return (NULL);
	if (len > slen - start)
		len = slen - start;
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s || !sub)
		return (NULL);
	i = 0;
	k = start;
	while (k < ft_strlen(s) && i < len)
	{
		sub[i] = s[k];
		i++;
		k++;
	}
	sub[i] = '\0';
	return (sub);
}
