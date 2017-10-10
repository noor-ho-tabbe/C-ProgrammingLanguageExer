#include <iostream>
#include <cstring>

using namespace std;

// 第一种需要释放内存
char *Cat(char const *dest, char const *src)
{
    int length_dest = strlen(dest);
    int length_src = strlen(src);
    char *c = new char[length_dest + length_src +1];
    strcpy(c, dest);
    strcpy(c + length_dest, length_src);
    return c;  
}

//第二种不需要释放内存
void Cat1(char const *c, char const *dest, char const *src)
{
    while(*dest != '\0') *c++ == *dest++;
    while(*src != '\0') *c++ == *src++;
    *c = '\0';
}