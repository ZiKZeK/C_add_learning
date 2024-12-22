// 递增和递减运算符
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 5;
    // 前置版本: ++a 显进行递增运算，返回递增后的值
    cout << "a++ = " << ++a << endl; // 6
    // 后置版本: a++ 显进行递增运算，返回递增前的值
    cout << "a = " << a++ << endl; // 6
    cout << a << endl;             // 7
    // 一般不适用后置版本，
    // 混用解引用和递增运算符
    vector<int> v = {1, 2, 3, 4, -5};
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
        cout << *pbeg++ << " "; // 1 2 3 4
    //  等价于*(pbeg++)

    // 对比for循环中的前置版本和后置版本，没啥区别，执行循环体后，
    // i的值会递增或递减
    for (int i = 0; i < 5; ++i)
        cout << i << " "; // 0 1 2 3 4

    for (int i = 0; i < 5; i++)
        cout << i << " "; // 0 1 2 3 4

    // 不能在表达式中同时赋值和使用递增或递减运算符
    return 0;
}