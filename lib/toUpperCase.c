#include <stddef.h>
#include "myTextFormatter.h"

void toUpperCase(char *s) {
    size_t t = 0;
    while(s[t] != '\0') {
        if(s[t] >= 'a' && s[t] <= 'z') {
            s[t] -= 'a' - 'A';
        }
        t++;
    }
}
