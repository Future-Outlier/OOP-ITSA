#include <bits/stdc++.h>
using namespace std;


int main()
{

    long x;

    while (cin >> x) {    
        long ans = (x / 100) * (x / 100) * (x / 100) + (x % 100 / 10) * (x % 100 / 10) * (x % 100 / 10) + (x % 10) * (x % 10) * (x % 10);

        if (ans == x) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

}

