#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ticket;
    cin >> ticket;
    cout << "NT10=" << ticket / 10 << '\n';
    cout << "NT5=" << (ticket%10) / 5 << '\n';
    cout << "NT1=" << (ticket%10%5) / 1 << '\n';
}