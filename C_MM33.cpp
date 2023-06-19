#include <bits/stdc++.h>
using namespace std;

bool isPerfect(long num) {
    long sum = 0;

    for (long i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
        if (sum > num) {
            break;
        }
    }

    return sum == num;
}

int main()
{

    long x;

    while (cin >> x) {
        bool isFirst = true;
        for (long i = 6; i <= x; i += 2) {
            if (isPerfect(i)) {
                if (isFirst) {
                    cout << i;
                    isFirst = false;
                } else {
                    cout << ' ' << i;
                }
            }
        }

        cout << '\n';
    }

}

