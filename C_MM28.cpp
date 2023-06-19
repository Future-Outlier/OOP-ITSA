#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x;

    while (cin >> x) {
        
        if (x >= 35) {
            cout << 35;
        }

        for (long i = 70; i <= x; i += 35) {
            cout << ' ' << i;
        }

        cout << '\n';
    }

}

