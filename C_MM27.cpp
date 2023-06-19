#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x, y;

    while (cin >> x >> y) {
        if (x > y) {
            swap(y, x);
        }

        cout << (x + y) * (y - x + 1) / 2 << '\n';
    }

}

