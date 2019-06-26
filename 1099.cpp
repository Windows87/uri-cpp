#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x, y, z, t;
        t = 0;
        cin >> x >> y;

        if(x > y) {
            z = x;
        } else {
            z = y;
            y = x;
        }

        for(int i2 = (y + 1); i2 < z; i2++) {
            if(i2 % 2 != 0) {
                t += i2;
            }
        }

        cout << t << '\n';
    }
    return 0;
}