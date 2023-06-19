#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x;

    while (cin >> x) {
        for (long i = 1; i <= x; ++i) {
            cout << i << "*" << i << "=" << i * i << '\n';
        } 
    }

}

