#include <stdio.h>

void Swap(int *p1, int *p2)
{
    int temp = *p2;
    *p2 = *p1;
    *p1 = temp;   
}

int main()
{   
    int a1 = 2, a2 = 3;
    printf("a1 = [%d] a2 = [%d]\n", a1, a2);
    Swap(&a1, &a2);
    printf("a1 = [%d] a2 = [%d]\n", a1, a2);
    return 0;
}