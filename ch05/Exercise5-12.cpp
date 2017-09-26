#include <iostream>
using namespace std;

int String_FindPair(string &s, char a, char b)
{
    int paircount = 0;
    string::iterator it = s.begin();
    while(it != s.end())
    {
        if(*it++ == a)
        {
            if(it != s.end() && *it == b)
            {
                ++paircount;
            }
        }
    }
    return paircount;
}

int Char_FindPair(char const *s, char a, char b)
{
    if(s == NULL) return 0;
    int paircount = 0;
    while(*s)
    {
        if(*s++ == a)
        {
            if(*s == b)
            {
                ++paircount;
            }
        }
    }
    return paircount;
}

int main()
{
    string  s = "xabaacbaxabb";
    char const *c = "xabaacbaxabb";
    char a = 'a';
    char b = 'b';
    cout << "String Pair count = " << String_FindPair(s, a, b) << endl;
    cout << "Char   Pair count = " << Char_FindPair(c, a, b) << endl;
    return 0;
}