#include<bits/stdc++.h>
using namespace std;

int main()
{
    double km;
    while (cin >> km) {
        double miles = km * 1.6;
        // cout << area * 10 << '\n';
        // cout << round(area) << '\n';
        // cout << round(area * 10) << '\n';
        miles = round(miles * 10) / 10;
        cout << fixed << setprecision(1) <<  miles  << '\n';
    }
    return 0;
}