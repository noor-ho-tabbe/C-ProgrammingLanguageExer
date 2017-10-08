//中位值
//1.按照顺序排列 如果是基数取中间那个数
//2.按照顺序排列 如果是偶数取中间两个数的平均值

#include <iostream>
#include <map>
#include <string>
#include <set>
#include <numeric>
using namespace std;

typedef multiset<double> SubData;
typedef map<string, SubData> Data;

void CollectData(Data &stats)
{
    string name;
    while(cin >> name)
    {
        double value;
        cin >> value;
        stats[name].insert(value);
    }
}

void PrintSetStats(SubData &stats)
{
    double sum = 0.0, median;
    int count = 0;
    for (SubData::iterator it = stats.begin(); it != stats.end(); ++it, ++count)
    {
        if (count == (stats.size() - 1) / 2)
        {
            median = *it;
            if (stats.size() % 2 == 0)
            {
                median = *it;
                median =  (median + (*++it)) / 2.0;
            }
        } 
    }
    cout <<"median = " << median << endl;
}

void Merge(SubData &dest, SubData &src)
{
    SubData::iterator itdest = dest.begin();
    for (SubData::iterator itsrc = src.begin(); itsrc != src.end(); ++itsrc)
    {
        itdest = dest.insert(itdest, *itsrc);
        src.erase(itsrc);
    }
}

void PrintStats(Data &stats)
{
    SubData global_set;
    for (Data::iterator it = stats.begin(); it != stats.end(); ++it)
    {
        cout << it->first << ":";
        PrintSetStats(it->second);
        Merge(global_set, it->second);
    }
    cout << "global stats:"; 
    PrintSetStats(global_set);
}

int main()
{
    Data stats;
    CollectData(stats);
    PrintStats(stats);
    return 0;
}
