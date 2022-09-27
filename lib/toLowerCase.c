#include <stddef.h>
#include "myTextFormatter.h"

void toLowerCase(char *s) {
    size_t t = 0;
    while(s[t] != '\0') {
        if(s[t] >= 'A' && s[t] <= 'Z') {
            s[t] += 'a' - 'A';
        }
        t++;
    }
}

