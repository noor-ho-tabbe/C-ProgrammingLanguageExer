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
     int a = 0;
     int b = 0;
     int c = 0;
     int d = 0;
     if ((vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0]) == 0 
         || (vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0]) == 0 )
    {
        cout << "array can't inverse" << endl;
        return;
    }
     a = vec[1][1] / (vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0]);
     b = (-vec[0][1]) / (vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0]);
     c = (-vec[1][0]) / (vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0]);
     d = vec[0][0] / (vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0]);


     cout << "Inverse :" << endl;
     cout << "[" << " ";
     cout << a << " ";
     cout << b << " ";
     cout << "]" << endl;
     cout << "[" << " ";
     cout << c << " ";
     cout << d << " ";
     cout << "]" << endl;
}

int main() {
    vector<vector<int> > vec = CreatArray();
    Inverse(vec);
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