#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len)
{
    if(!big || !little || big_len == 0 || little_len == 0 || big_len < little_len)
    {
        return NULL;
    }

    const unsigned char *b = (const unsigned char *)big;
    const unsigned char *l = (const unsigned char *)little;

    for(size_t i = 0; i <= big_len - little_len; i++)
    {
        if(b[i] == l[0] && mx_memcmp(b + i, l, little_len) == 0)
        {
            return (void *)(b + i);
        }
    }

    return NULL;
}
