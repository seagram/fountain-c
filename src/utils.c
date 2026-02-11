#include <stddef.h>
#include <string.h>

char *remove_substring(char *string, const char *subtring) {
    size_t length = strlen(subtring);
    if (length > 0) {
        char *p = string;
        while ((p = strstr(p, subtring)) != NULL) {
            memmove(p, p + length, strlen(p + length) + 1);
        }
    }
    return string;
}
