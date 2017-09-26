#include <iostream>

int const n_months = 12;
char const *month1[n_months]
    = {"January", "February", "March", "April",
       "May", "June", "July", "August", 
        "September", "October", "November", "December"};

int const month_length[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


struct Month
{
    char const *name_;
    int length_;
};

Month const month2[n_months] 
    =  {{"January", 31}, {"February", 28}, {"March", 31}, 
        {"April", 30}, {"May", 31}, {"June", 30}, 
        {"July", 30}, {"August", 31}, {"September", 30}, 
        {"October", 31}, {"November", 30}, {"December", 31}};


int main()
{
    for (int k = 0; k < n_months; ++k)
    {
        std::cout<< month1[k] << ":\t"
        << month_length[k] << std::endl;
    }
   std::cout<< "==============================" << std::endl;
    for (int k = 0; k < n_months; ++k)
    {
        std::cout<< month2[k].name_ << ":\t"
        << month2[k].length_ << std::endl;
    }

    return 0;
}