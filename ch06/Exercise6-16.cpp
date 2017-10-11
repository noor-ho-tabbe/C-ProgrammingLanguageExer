/*Write a function atoi(const char*) that takes a string containing digits and returns the
corresponding int. For example, atoi("123") is 123. Modify atoi() to handle C++ octal and
hexadecimal notation in addition to plain decimal numbers. Modify atoi() to handle the C++
character constant notation.
*/
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