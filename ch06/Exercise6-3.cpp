#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Stat{
    Stat():sum_(0.0), count_(0){}
    double sum_;
    int count_;
};

typedef map<string, Stat> Data;
void collect_data(Data &stats)
{
    string name;
    while(cin >> name)
    {
        double value;
        cin >> value;
        stats[name].sum_ += value;
        ++stats[name].count_;
    }
}

void print_stats(Data &stats)
{
    double sum = 0.0;
    int count = 0;
    for (Data::iterator it = stats.begin(); it != stats.end(); ++it)
    {
        cout << it->first << ": sum = " << it->second.sum_
             <<", mean " << it->second.sum_ / it->second.count_
             << '\n';
        sum += it->second.sum_;
        count += it->second.count_;
    }
    cout << "global sum = " << sum 
         << "global meam = " << sum / count
         << endl;
    
}

int main()
{
    Data stats;
    collect_data(stats);
    print_stats(stats);
    return 0;
}
