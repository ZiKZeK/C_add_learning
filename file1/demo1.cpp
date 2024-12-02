#include <iostream>

int main()
{
    unsigned int a = 10;
    int b = -9;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << bool(b < a) << std::endl;
    return 0;
}
// 无符号数和有符号数的比较大小，
// 输出结果会出错
// 原因是：带符号数会自动转换成无符号数进行比较，