#include <bits/stdc++.h>
using namespace std;

int main()
{

    long x;

    while (cin >> x) {
        cout << 1;
        for (long i = 2; i <= x; ++i) {
            if (x % i == 0) {
                cout << " " << i;
            }
        }
        cout << '\n';
    }

}

