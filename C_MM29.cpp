#include <bits/stdc++.h>
using namespace std;

vector<long> sieve;
vector<bool> use;
int main()
{
    use.resize(2e6, false);
    for (long i = 2; i * i <= 2e6; ++i) {
        if (false == use[i]) {
            sieve.push_back(i);

            for (long j = i; j * j <= 2e6; j += i) {
                use[j] = true;
            }
        }
    }


    long x;

    while (cin >> x) {
        auto it = lower_bound(sieve.begin(), sieve.end(), x);
        it--;
        
        cout << *it << '\n';
    }

}

