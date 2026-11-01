#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rev = 0, rem = 0, orgnum;
    cout << "Enter a number: ";
    cin >> n;
    orgnum = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == orgnum)
    {
        cout << "\n The number is a palindrome";
    }
    else
        cout << "\n The number is a non palindrome";
    cout << "\n The reverse number is: " << rev;
    return 0;
}