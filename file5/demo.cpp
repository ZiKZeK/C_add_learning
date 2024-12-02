
#include <iostream>
using namespace std;

int main()
{
    //  初始化和const
    int i = 42;
    const int ci = i;
    int j = ci;
    cout << "i = " << i << endl;
    cout << "ci = " << ci << endl;
    // 如果要在多个文件中使用const
    // 可以把const定义在头文件中，需要再头文件中声明extern

    // const 和引用
    // 初始化和const的引用

    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;

    i = 100;
    cout << "r1 = " << r1 << endl; // 100
    cout << i << endl;             // 100

    // 指针和const

    const double pi = 3.14;
    // double * ptr = &pi; // 普通指针不能指向const对象
    const double *cptr = &pi; // const指针可以指向const对象
    // *cptr = 3.14159; // 编译错误，不能修改const对象的值

    // const指针
    int errNumb = 0;
    int *const curErr = &errNumb; // const指针，指向常量地址
    const double pi2 = 3.14;
    const double *const cptr2 = &pi2; // const指针，指向常量地址
    // 顶层const
    // 对象拷贝时 靠左的const是底层const，右边的const是顶层const

    // 常量表达式
    const int max_files = 100;       // 常量定义
    const int limit = max_files + 1; // 常量表达式
    int staff_size = 50;             // 不是const表达式

    // constexpr变量

    constexpr int mf = 100;         // 常量定义
    constexpr int l = mf + 1;       // 常量表达式
    constexpr int staff_size2 = 50; // constexpr变量

    // constexpr函数
    return 0;
}