#include "libft.h"
#include <stdlib.h>

static int ft_word_count(const char *s, char c)
{
    int count;
    int in_wordword;

    count = 0;
    in_wordword = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return count;
}

static char *ft_word_dup(const char *s, int start, int end)
{
    char *word;
     int i;
     size_t len;
    
    i = 0;
    len = end - start;
     word = (char *)malloc((len + 1) * sizeof(char));

    if (!word)
        return NULL;
    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return word;
}
static void ft_free(char **result, int words)
{
    int i;
    i = 0;
    while (i < words)
        free(result[i++]);
    free(result);
}
char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int word_start;

    i = 0;
    j = 0; 
    word_start = -1;
    if (!s || !(result = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *))))
        return NULL;
    while (s[i])
    {
        if (s[i] != c && word_start == -1)
            word_start = i;
        else if ((s[i] == c || s[i + 1] == '\0') && word_start != -1)
        {
            result[j] = ft_word_dup(s, word_start, (s[i] == c) ? i : i + 1);
            if (!result[j++])
                return (ft_free(result, j - 1), NULL);
            word_start = -1;
        }
        i++;
    }
    result[j] = NULL;
    return result;
}
/*int main(void)
{
    char **result = ft_split("hello world this is libft", ' ');
    int i = 0;

    if (!result)
        return 1;

    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i++]);
    }
    free(result);

    return 0;
}*/
