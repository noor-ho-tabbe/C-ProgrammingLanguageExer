#include <iostream>
using namespace std;

struct Date
{
    unsigned day_: 5;
    unsigned month_: 4;
    int year_: 15;
};

istream& operator>>(istream &input, Date &d)
{
    int const bufsize = 6;
    char buffer[bufsize];
    input.getline(buffer, bufsize, '/');
}
/////////////