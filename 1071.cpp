#include <iostream>

using namespace std;

int main() {
    int x, y, t;
    t = 0;
    
    cin >> x;
    cin >> y;

    for(int i = (x - 1); i > y; i--) {
        if(i % 2 != 0) {
            t += i;
        }
    }

    cout << t << '\n';

    return 0;
}