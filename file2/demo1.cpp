// 转义字符汇总
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, \"World\"!" << endl;  // 输出Hello, "World"!
    cout << "Hello, \"World\"" << endl;   // 输出Hello, "World"
    cout << "Hello, \"World\n\"" << endl; // 输出Hello, "World\n"
    cout << "Hello, \"World\t\"" << endl; // 输出Hello, "World\t"
    cout << "Hello, \"World\b\"" << endl; // 输出Hello, "World"
    cout << "Hello, \"World\r\"" << endl; // 输出Hello, "World"
    cout << "Hello, \"World\f\"" << endl; // 输出Hello, "World"
    cout << "Hello, \"World\a\"" << endl; // 输出Hello, "World"
    cout << "Helllo,\?World\n"
         << endl; // 输出Helllo,\?World\n
    return 0;
}