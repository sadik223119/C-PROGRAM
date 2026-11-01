#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter a and b: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "the value of a is " << a << endl
         << "the value of b is " << b;
    return 0;
}