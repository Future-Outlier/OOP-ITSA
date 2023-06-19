#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<long> fac(20, 1);

    for (int i = 1; i <= 19; ++i) {
        fac[i] = fac[i - 1] * i;
    }

    long x;

    while (cin >> x) {
        cout << fac[x] << '\n';
    }

}

