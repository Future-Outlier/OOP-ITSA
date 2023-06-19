#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x, y;
    
    while (cin >> x >> y) {
        long dis = x * x + y * y;
        
        if (dis > 100 * 100) {
            cout << "outside" << '\n';
        } else {
            cout << "inside" << '\n';
        }
    }    

}