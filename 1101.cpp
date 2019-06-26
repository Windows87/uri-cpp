#include <iostream>

using namespace std;

int main() {
    while(true) {
        int x, y, z, s;
        s = 0;
        cin >> x >> y;

        if(x <= 0 || y <= 0) {
            break;
        }

        if(x > y) {
            z = x;
        } else {
            z = y;
            y = x;
        }

        for(int i = y; i <= z; i++) {
            cout << i << ' ';
            s += i;
        }

        cout << "Sum=" << s << '\n';
    }

    return 0;
}