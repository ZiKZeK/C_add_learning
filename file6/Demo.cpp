#include <iostream>
using namespace std;
int main()
{
    // 处理类型

    // 类型别名
    typedef int INT;
    INT a = 10;
    INT b = 20;
    INT c = a + b;
    cout << "c = " << c << endl;

    typedef INT *p;
    p p1 = &a;
    p p2 = &b;
    cout << "a = " << *p1 << endl;
    cout << "b = " << *p2 << endl;

    // 指针， 常量和别名

    typedef char *pchar;
    // const pchar cstr = 'p';
    // const pchar cstr = 0;
    // cout << cstr << endl;

    char ch1 = 'a';
    const char *pcstr = &ch1;
    cout << &pcstr << endl;
    // return 0;

    // auto     // C++11 新特性，自动类型推导
    int x = 10;
    auto y = x + 20;
    cout << y << endl;

    // decltype  // C++11 新特性，decltype 关键字
    int z = 30;
    decltype(z) w = z + 4.5;
    cout << w << endl;
}