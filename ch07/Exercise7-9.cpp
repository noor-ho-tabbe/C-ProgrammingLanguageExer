/*
*写一个加密程序, 它从cin读入，并将编码后的字符序列写到cout,你可以采用如下的简单加密模式
: 字符c的加密形式是c ^ key[i], 其中key是通过命令行参数提供的一个字符串。这个程序以循环
的方式使用key中的字符，直到读完全部输入。用同一个key重新加密编码后的正文就能得到原来的正文，
如果不提供key(空字符串),则不做加密。
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char *key = (argc >= 2) ? argv[1] : "";
    size_t key_length = (argc >= 2) ? strlen(key) : 1;
    for (size_t k = 0; cin.getc(ch))
}