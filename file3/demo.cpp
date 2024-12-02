#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int &r = i;
    cout << "i = " << i << endl;
    cout << "&i = " << &i << endl;
    cout << "r = " << r << endl;
    cout << "&r = " << &r << endl;
    int *p1, *p2;
    p1 = &i;
    cout << "p1 = " << p1 << endl;
    cout << "*p1 = " << *p1 << endl;
    p2 = &r;
    cout << "p2 = " << p2 << endl;
    *p2 = 12;
    cout << "p2 = " << p2 << endl;
    cout << "*p2 = " << *p2 << endl;
    // r2 is a reference to the value pointed to by p
    int &r2 = *p1;
    cout << "r2 = " << r2 << endl;
    cout << "&r2 = " << &r2 << endl;
    // r3 is a reference to the value pointed to by i
    int &r3 = i;
    cout << "r3 = " << r3 << endl;
    cout << "&r3 = " << &r3 << endl;
    return 0;
}