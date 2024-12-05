//  迭代器的使用
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s("some string");
    string temp = s;
    if (temp.begin() == temp.end())
    {
        auto it = temp.begin();
        *it = toupper(*it);
    }
    cout << temp << endl;
    temp = s;
    for (auto it = temp.begin(); it != temp.end() && isspace(*it); ++it)
    {
        *it = toupper(*it);
    }
    cout << temp << endl;

    vector<int> v{1, 2, 3, 4, 5, 6, 6, 9, 11, 13, 16, 24, 36, 76, 99};
    int target;
    cout << "Enter a target number: ";
    cin >> target;
    auto beg = v.begin();
    auto end = v.end();
    auto mid = beg + (end - beg) / 2;
    if (beg == end)
    {
        cout << "Vector is empty." << endl;
        return 0;
    }
    while (*mid != target)
    {
        if (*mid < target)
            beg = mid + 1; // 注意区间的更新
        else if (*mid > target)
            end = mid; // 注意区间的更新
        mid = beg + (end - beg) / 2;
    }
    if (*mid == target)
        cout << "Target number found at index " << mid - v.begin() << endl;
    else
        cout << "Target number not found." << endl;
    return 0;
}