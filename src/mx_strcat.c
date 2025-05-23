#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2)
{
    char *dst = s1 + mx_strlen(s1);

    while(*s2 != '\0')
    {
        *dst++ = *s2++;
    }

    *dst = '\0';

    return s1;
}
