#include <bits/stdc++.h>
using namespace std;

int main()
{

    long x;

    while (cin >> x) {
        if (x >= 3 && x <= 5) {
            cout << "Spring" << '\n';
        } else if (x >= 6 && x <= 8) {
            cout << "Summer" << '\n';
        } else if (x >= 9 && x <= 11) {
            cout << "Autumn" << '\n';
        } else {
            cout << "Winter" << '\n';
        }
    }

}

