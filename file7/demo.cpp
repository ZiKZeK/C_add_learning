#include <iostream>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2;
    cout << s1 + s2 << endl;
    cout << s1.empty() << endl;
    cout << s2.empty() << endl;
    cout << s1.size() << endl;
    cout << s2.size() << endl;
    cout << s3.empty() << endl;
    cin.ignore();
    getline(cin, s3);
    cout << s3 << endl;
    cout << s3[1] << endl;

    string s4;
    s4 = s3;
    cout << bool(s4 == s3) << endl;
    for (int i = 0; i < s3.size(); i++)
    {
        cout << s3[i] << " ";
    }

    // 基于范围的for循环
    // for (declaration : expression )
    // statement;

    string str("some string");

    for (auto c : str)
        cout << c << " ";

    return 0;
}