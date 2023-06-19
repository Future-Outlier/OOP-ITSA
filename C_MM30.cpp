#include <bits/stdc++.h>
using namespace std;


int main()
{

    long x;

    while (cin >> x) {
        bool isPrime = true;

        for (long i = 2; i * i <= x; ++i) {
            if (x % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

}

