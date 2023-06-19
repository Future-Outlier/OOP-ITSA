#include <bits/stdc++.h>
using namespace std;

int main()
{

    long x;

    while (cin >> x) {
        if (x % 400 == 0) {
            cout << "Bissextile Year" << '\n';
        } else if (x % 100 == 0) {
            cout << "Common Year" << '\n';
        } else if (x % 4 == 0) {
            cout << "Bissextile Year" << '\n';
        } else {
            cout << "Common Year" << '\n';
        }
    }

}

