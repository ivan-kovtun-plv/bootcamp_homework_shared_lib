#include <stdio.h>
#include <string.h>
#include "myTextFormatter.h"

typedef enum {
    TO_UPPER,
    TO_LOWER,
    ERROR
} ActionType;

int main(void) {

    ActionType actionType = ERROR;
    while (actionType == ERROR) {
        printf("U or L:\n");
        char in[8];
        fgets(in, 7, stdin);
        if( (!strcmp(in,"U\n")) || (!strcmp(in,"u\n")) ) {
            actionType = TO_UPPER;
        }
        if( (!strcmp(in,"L\n")) || (!strcmp(in,"l\n")) ) {
            actionType = TO_LOWER;
        }
    }
    printf("Enter line:\n");
    char line[128];
    fgets(line, 127, stdin);

    switch(actionType) {
    case TO_UPPER:
        toUpperCase(line);
        break;
    case TO_LOWER:
        toLowerCase(line);
        break;
    }

    printf("%s\n", line);

    return 0;
}

