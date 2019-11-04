#include "libmx.h"

int mx_compare(const char *str1, const char *str2)
{
    while(*str1 && *str2) {
        if(*str1 != *str2){
            return 0;
        }
        str1++;
        str2++;
    }
    return(*str2 == '\0');
}

char *mx_strstr(const char *haystack, const char *needle) {
    while(*haystack !='\0') {
        if ((*haystack == *needle) && mx_compare(haystack, needle))
        {
            return (char*) haystack;
        }
        haystack++;
    }
    return 0;
}
