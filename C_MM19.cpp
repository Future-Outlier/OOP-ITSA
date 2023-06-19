#include <bits/stdc++.h>
using namespace std;


int main()
{
    double minutes;
    
    while (cin >> minutes) {
        if (minutes <= 800) {
            minutes *= 0.9;
        } else if (minutes < 1500) {
            minutes *= 0.9 * 0.9;
        } else {
            minutes *= 0.9 * 0.79;
        }

        cout << fixed << setprecision(1) << round(minutes * 10) / 10 << '\n';
    }    

}

