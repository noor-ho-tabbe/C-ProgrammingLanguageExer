/*
写一个程序，它读入任意多个由命令行参数提供名字的文件，并将它们一个接着一个写入cout
因为这个程序拼接起它的输入去产生输出，你可以称它为cat
*/

#include <iostream>
#include <fstream>
using namespace std;

void cat_stream(istream &input)
{
    char ch;
    while(input.get(ch))
        cout.put(ch);
}

int main(int argc, char * argv[])
{
    if(argc < 2)
       cat_stream(cin);
    else
    {
        for(int k = 1; k != argc; ++k)
        {
            ifstream infile(argv[k]);
            cat_stream(infile);
        }
    }
    return 0;
}