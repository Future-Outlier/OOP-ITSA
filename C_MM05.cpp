#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h;
    while (cin >> h) {
        double area = h * h;
        // cout << area * 10 << '\n';
        // cout << round(area) << '\n';
        // cout << round(area * 10) << '\n';
        area = round(area * 10) / 10;
        cout << fixed << setprecision(1) <<  area  << '\n';
    }
    return 0;
}