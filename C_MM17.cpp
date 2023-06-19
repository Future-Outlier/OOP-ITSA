#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
    return (b == 0) ? a : gcd(b, a % b);
}
int main()
{
    long x, y;
    
    while (cin >> x >> y) {
        cout << gcd(x, y) << '\n';
    }    

}

