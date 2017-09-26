#include <iostream>

using namespace std;

int const n_months = 12;
char const *month[n_months]
    = {"January", "February", "March", "April",
       "May", "June", "July", "August", 
        "September", "October", "November", "December"};

// 注: month[0] 表示January的地址，并不是这个字符串 &month[0] 表示January这个字符串 
void PrintMonth(char const **val)
{
    for(int i = 0; i < n_months; i++)
        cout<<"Month = "<< val[i] << endl;
}

int main()
{
    PrintMonth(month);
    return 0;
}