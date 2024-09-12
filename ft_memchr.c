#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *s_c;

    i = 0;
    s_c = (unsigned char *)s;
    while (i < n)
    {
        if (s_c[i] == (unsigned char)c)
            return (s_c + i);
        i++;
    }
    return (NULL);
}
/*int main()
{
    char    data[] = "night walks";
    char    *rst ;

    rst = (char *)ft_memchr(data, 'w', 10);
    if (rst)
        printf("found the characther at position : %ld\n", rst - data);
    return 0;
}*/