#include <bits/stdc++.h>
using namespace std;

int main()
{
    long seconds;
    
    cin >> seconds;

    cout << seconds / (24 * 60 * 60) << " days" << '\n';
    cout << seconds % (24 * 60 * 60) / (60 * 60) << " hours" << '\n';
    cout << seconds % (24 * 60 * 60) % (60 * 60) / 60 << " minutes" << '\n';
    cout << seconds % (24 * 60 * 60) % (60 * 60) % 60 << " seconds" << '\n';

}