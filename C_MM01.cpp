#include <bits/stdc++.h>
using namespace std;

int main()
{   
    double up, down, h;
    while (cin >> up >> down >> h) {
        cout << "Trapezoid area:";
        cout << fixed << setprecision(1) << (up + down) * h / 2 << '\n';
    }
    return 0;
}
