/*
写一个不用递归的阶乘函数。
*/
#include <iostream>
using namespace std;

void factorial(int a)
{
    int result = 1;
    while(a > 1)
    {
        result *= a--;
    }
    cout << "result:" << result << endl;
}

int main()
{
    int a = 5;
    factorial(a);
    return 0;
}