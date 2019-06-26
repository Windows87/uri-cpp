#include <iostream>

using namespace std;

int main() {
    string d;
    int d1, d2, h1, h2, m1, m2, s1, s2;
    
    cin >> d >> d1;
    cin >> h1 >> d >> m1 >> d >> s1;
    cin >> d >> d2;
    cin >> h2 >> d >> m2 >> d >> s2;

    long int i1 = d1 * 24 * 60 * 60 + h1 * 60 * 60 + m1 * 60 + s1;
    long int i2 = d2 * 24 * 60 * 60 + h2 * 60 * 60 + m2 * 60 + s2;
    long int i3 = i2 - i1;

    cout << (int) i3 / 86400 << " dia(s)\n";
    i3 -= int(i3 / 86400) * 86400;
    cout << (int) i3 / 3600 << " hora(s)\n";
    i3 -= int(i3 / 3600) * 3600;
    cout << (int) i3 / 60 << " minuto(s)\n";
    i3 -= int(i3 / 60) * 60;
    cout << i3 << " segundo(s)\n";

    return 0;
}