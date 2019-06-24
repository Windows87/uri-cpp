#include <iostream>

using namespace std;

int main() {
    int p = 0;

    for(int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        if(x % 2 == 0) {
            p++;
        }
    }

    cout << p << " valores pares\n";
    return 0;
}
