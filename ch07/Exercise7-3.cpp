/**
*写出一个类似 "HELLO WORLD!" 的函数，它以一个名字作为命令行参数，
*并写出“hello , name” (name是命令行参数)。 修改这个程序，使它能以一系列名字作为参数，
*并对每个名字分别说hello 
*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    if (argv < 2)
    {
        cout << "hi why not pass me arguments? " << endl;
    } 
    else
    {
        for (int k = 1; k < argc; k++)
        {
            cout << "hello" << argv[k] << endl;
        }
    }
    return 0;
}