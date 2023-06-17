#include <bits/stdc++.h>
using namespace std;

int main()
{
    double dis;
    while (cin >> dis) {
        double cm = dis * 100.0;
        double time = cm / (100.0 - 2.54 * 30.0);
        cout << ceil(time) << '\n';
    }
}