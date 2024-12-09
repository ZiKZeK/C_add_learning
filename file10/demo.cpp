// 数组
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 自动初始化
    char ar[] = "c+++";
    char br[4] = "c++";
    cout << ar << endl;
    cout << br << endl;

    // 复杂的数组声明
    int *ptrs[10];
    for (int i = 0; i < 10; i++)
    {
        ptrs[i] = new int[i + 1];
        for (int j = 0; j < i + 1; j++)
        {
            ptrs[i][j] = i * j;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ptrs[i] << " "; // 每个数组的内容是一个指针
        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        delete[] ptrs[i];
    }
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int(*Parray)[10] = &arr; // 指向数组的指针
    for (int i = 0; i < 10; i++)
    {
        cout << (*Parray)[i] << " ";     // 输出数组的第一个元素
        cout << Parray[0][i] << " ";     // 输出数组的第一个元素
        cout << *(Parray + i) << " ";    //
        cout << *(Parray + 0)[i] << " "; //
        cout << Parray[i][0] << " ";     // 无法输出数组的第一个元素
        cout << endl;
    }
    // 1. int(*Parray)[10] = &arr;
    // 含义：

    // Parray 是一个指针，指向一个包含 10 个整型元素的数组。
    // Parray 的类型是 int (*)[10]，即指向大小为 10 的整型数组的指针。
    // 解读：

    // 如果有一个数组 arr，定义为 int arr[10];，那么 &arr 表示数组的地址（整个数组的地址，不是首元素的地址）。
    // 将 Parray 指向 arr 后，*Parray 可以解引用为 arr，而 (*Parray)[i] 等价于 arr[i]。
    // 2. int *ptrs[10];
    // 含义：

    // ptrs 是一个包含 10 个整型指针的数组。
    // ptrs 的类型是 int *[10]，即数组类型。
    // 解读：

    // 数组中的每个元素是一个指针，指向一个 int 类型的值。

    int(&arrRef)[10] = arr; // 引用数组
    for (int i = 0; i < 10; i++)
    {
        cout << arrRef[i] << " "; // 输出数组的第一个元素  }
        cout << endl;
    }

    // 标准库的begin()和end()函数
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *beg = begin(arr2);      // 获取数组首元素的指针
    int *last = end(arr2);       // 获取数组尾元素的下一位置的指针
    cout << *beg << endl;        // 输出数组首元素
    cout << *(last - 1) << endl; // 输出数组尾元素
    cout << *last << endl;       // 输出数组尾元素后面的元素

    // 使用数组初始化vector对象
    int int_arr[] = {1, 2, 3, 4, 5};
    vector<int> ivec(begin(int_arr), end(int_arr));
    for (int i : ivec)
        cout << i << " ";
    cout << endl;

    vector<int> ivec2(arr, arr + 5);
    for (int i : ivec2)
        cout << i << " ";
    cout << endl;
    // 使用范围for语句处理多维数组
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    for (size_t i = 0; i < rowCnt; i++)
        for (size_t j = 0; j < colCnt; j++)
            ia[i][j] = i * colCnt + j;

    for (size_t i = 0; i < rowCnt; i++)
    {
        for (size_t j = 0; j < colCnt; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }

    size_t cnt = 0;
    for (auto &row : ia)      // 遍历外层
        for (auto &col : row) // 遍历内层
        {
            col = cnt;
            ++cnt;
        }

    for (size_t i = 0; i < rowCnt; i++)
    {
        for (size_t j = 0; j < colCnt; j++)
            cout << ia[i][j] << " ";
        cout << endl;
    }

    // 指针和多维数组

    int(*p)[4] = ia; // 指向含有四个整数的数组， 和整形指针数组不同
    cout << p << endl;
    cout << p[0][2] << endl;
    cout << (p[1])[2] << endl;
    cout << *p[2] << endl;
    cout << *p[3] << endl; // 超过范围

    for (auto p2 = ia; p2 != ia + 3; ++p2)
    {
        for (auto q = *p2; q != *p2 + 4; ++q)
            cout << *q << " ";
        cout << endl;
    }

    return 0;
}