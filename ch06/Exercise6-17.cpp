/*17. (∗2) Write a function itoa(int i, char b[]) that creates a string representation of i in b and
   returns b.
*/
#include <iostream>
#include <stdio.h>
using namespace std;
char const digit[] = "0123456789";
char *itoa(int i, char b[])
{
    char *p = b;
    if (i < 0)  //负数的情况
    {
        *p++ = '-';
        i = -i;
    }
    int shifter = i;
    
    // 指针移动到最右端
    do { 
        ++p;
        shifter = shifter / 10;
    } while(shifter);
    *p = '\0';

    // 再移动回来
    do {
        *--p = digit[i % 10];
        i = i / 10;
    }while(i);

    return p;
}

int main()
{
    int n = 3;
    char *str =  new char[n];
    itoa(35, str);
    printf("b = %s\n", str);
    return 0;
}