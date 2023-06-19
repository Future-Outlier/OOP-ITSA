#include <bits/stdc++.h>
using namespace std;

int main()
{
    int startHour, startMinute;
    int endHour, endMinute;
    int minutes;
    
    cin >> startHour >> startMinute;
    cin >> endHour >> endMinute;

    minutes = 60 * (endHour - startHour) + (endMinute - startMinute);

    if (minutes > 240) {
        minutes -= 240;
        cout << (minutes / 30) * 60 + 4 * 40 + 4 * 30 << '\n';
    } else if (minutes > 120 && minutes <= 240) {
        minutes -= 120;
        cout << (minutes / 30) * 40 + 4 * 30 << '\n';
    } else if (minutes >= 30 && minutes <= 120) {
        cout << (minutes / 30) * 30  << '\n';
    } else {
        cout << 0 << '\n';
    }
}