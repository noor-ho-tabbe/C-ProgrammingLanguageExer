/*
*写一个函数求二维数组的逆。
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 创建一个二维数组
vector<vector<int> > CreatArray()
{
    int num = 0;
    int temp = 0;
    vector<vector<int> > array(2);
    for (int i = 0; i < 2; ++i)
    {
        cin >> temp;
        array[0].push_back(temp);
    }

    for (int i = 0; i < 2; ++i)
    {
        cin >> temp;
        array[1].push_back(temp);
    }

    //输出二维数组的行和列 
    cout << "Row:" << array.size() << "  Column:" << array[0].size() <<endl;
    //输出二维数组 
    for (int j = 0; j < array.size(); j++) {
        cout << "[" << " " ;
        for (int k = 0; k < array[j].size(); k++) {
            cout << array[j][k] << " " ;
        }
        cout << "]" << endl;
    }
    return array;
}

// 求逆
void Inverse(vector<vector<int> > &vec)
{
     int a = b = c = d = 0;
     a = 

}

int main() {
    CreatArray();
    return 0;
}

/*int main()
{
    int num;
    //cin >> num;
 
    vector<int> vecNum;
    int temp;
    for (int i = 0; i < 2; ++i)
    {
        cin >> temp;
        vecNum.push_back(temp);
    }
 
    for (vector<int>::iterator itr = vecNum.begin(); itr != vecNum.end(); ++itr)
    {
        cout << *itr << endl;
    }
 
    return 0;
}*/