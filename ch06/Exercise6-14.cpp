/*Write a function rev() that takes a string argument and reverses the characters in it. That
is, after rev(p) the last character of p will be the first, etc.
*/
#include <stdio>

// c实现
void rev(char * c)
{
    for (char *e = c + strlen(c) -1; c < e; ++c, --e)
    {
        char tmp = *c;
        *c = *e;
        *e = tmp;
    }
}

// c++实现  string类型
void rev(string &c)
{
    reverse(c.begin(), c.end());
}

// c++实现  char *类型
void rev(char *c)
{
    reverse(c, c + strlen(c) - 1);
}