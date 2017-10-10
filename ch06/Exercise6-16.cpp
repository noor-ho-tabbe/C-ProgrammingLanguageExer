#include <iostream>

int atoi(char *s)
{
    int length = strlen(s);
    int value = 0;
    char *e = s + length - 1;
    for (int i = 0; i < length; i++)
    {
        value = ((*e)-- - '0') * i*10;
    }
}