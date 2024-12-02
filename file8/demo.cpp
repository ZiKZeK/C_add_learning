// vector 是一个类模板，使用的时候需要实例化
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 定义和初始化
    vector<int> v1;
    vector<int> v2(v1);
    vector<int> v3 = v1;
    vector<int> v4(10, 42); // 10个元素，每个元素的值为42

    vector<int> v5(10);               // 10个元素，每个元素的值为0
    vector<int> v6{1, 2, 3, 4, 5};    // 初始化列表
    vector<int> v7 = {1, 2, 3, 4, 5}; // 初始化列表

    vector<vector<int>> file; // 二维向量

    // 添加元素
    v7.push_back(6);
    for (auto i : v7)
        cout << i << " ";
    cout << endl;
    return 0;
}