#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    y = 0;

    while(y < 6) {
        if(x % 2 != 0) {
            cout << x << "\n";
            y++;
        }
        x ++;
    }

    return 0;
}