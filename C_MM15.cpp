#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x, y;
    
    while (cin >> x >> y) {
        if (x > 100 || x < 0 || y > 100 | y < 0) {
            cout << "outside" << '\n';
        } else {
            cout << "inside" << '\n';
        }
    }    

}