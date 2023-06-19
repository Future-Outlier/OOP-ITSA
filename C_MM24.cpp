#include <bits/stdc++.h>
using namespace std;

int main()
{
    long hour;
    double wage;

    while (cin >> hour >> wage) {
        double salary = 0;

        if (hour > 121) {
            hour -= 120;
            salary = hour * wage * 1.66 + 60 * wage * 1.33 + 60 * wage;
        } else if (hour > 60) {
            hour -= 60;
            salary = hour * wage * 1.33 + 60 * wage;
        } else {
            salary = hour * wage;
        }

        cout << fixed << setprecision(1) << round(salary * 10) / 10 << '\n';

    }

}

