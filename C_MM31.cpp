#include <bits/stdc++.h>
using namespace std;


int main()
{

    long x;

    while (cin >> x) {
        long ans = 0;

        for (long i = 6; i <= x; i += 12) {
            ans += i;
        }

        cout << ans << '\n';
    }

}

