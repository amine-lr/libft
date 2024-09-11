#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

    i = 0;
    if (dstsize == 0)
    {
        while (src[i])
            i++;
        return (i);
    }
    while (i < dstsize -1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while (src[i] != '\0')
        i++;
    return (i);
}
int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];
    size_t ret;

    // Copy src to dst with enough space
    ret = ft_strlcpy(dst, src, sizeof(dst));
    printf("Destination: '%s'\n", dst);
    printf("Returned length of src: %zu\n", ret);

    // Copy src to dst with limited space
    ret = ft_strlcpy(dst, src, 6);  // Only room for "Hello"
    printf("Truncated destination: '%s'\n", dst);
    printf("Returned length of src: %zu\n", ret);

    return 0;
}
