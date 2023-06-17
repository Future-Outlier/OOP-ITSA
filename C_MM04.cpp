#include <bits/stdc++.h>
using namespace std;

int main()
{   
    /*
        7+3=10
        7*3=21
        7-3=4
        7/3=2...1
    */

    long long a, b;
    while (cin >> a >> b) {
        cout << a << "+" << b << "=" << a + b << '\n';
        cout << a << "*" << b << "=" << a * b << '\n';
        cout << a << "-" << b << "=" << a - b << '\n';
        long long c = (a % b + b) % b;

        if (a % b < 0)
            cout << a << "/" << b << "=" << a / b - 1 << "..." << c << '\n';
        else
            cout << a << "/" << b << "=" << a / b << "..." << c << '\n';
    }

    return 0;
}
