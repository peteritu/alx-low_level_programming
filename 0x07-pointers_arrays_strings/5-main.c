#include "main.h"
#include <unistd.h>

int _strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

int main(void)
{
    char s[] = "hello, world";
    char f[] = "world";
    char *t;

    t = _strstr(s, f);
    
    if (t)
        write(1, t, _strlen(t));
    else
        write(1, "Substring not found\n", _strlen("Substring not found\n"));

    return (0);
}

