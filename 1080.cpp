#include <iostream>

using namespace std;

int main() {
    int ma, p;

    ma = 0;

    for(int i = 0; i < 100; i++) {
        int n;
        cin >> n;

        if(n > ma) {
            ma = n;
            p = i + 1;
        }
    }

    cout << ma << '\n';
    cout << p << '\n';

    return 0;
}