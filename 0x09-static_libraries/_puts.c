#include <unistd.h>

void _puts(char *s) {
    while (*s != '\0') {
        write(1, s, 1);
        s++;
    }
}

