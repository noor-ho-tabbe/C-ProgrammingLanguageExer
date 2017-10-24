#include <iostream>


int main()
{
    char const table[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    // 十进制
    for(int i = 0; i < sizeof(table) - 1; i++)
    {
        std::cout<< table[i]<<std::endl;
    }
    std::cout<< "-------------------------"<<std::endl;
    // 十六进制  原来hex不能直接输出16进制 需要转化成为整形才可以
    for(int i = 0; i < sizeof(table) - 1; i++)
    {
        std::cout<< (int)table[i]<< std::hex<<std::endl;
    }
}
