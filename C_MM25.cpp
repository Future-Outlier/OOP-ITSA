#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x;

    while (cin >> x) {
        long ans = 0;

        for (long i = 3; i <= x; i += 3) {
            ans += i;
        }

        cout << ans << '\n';       
    }

}

