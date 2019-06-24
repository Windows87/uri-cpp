#include <iostream>

using namespace std;

int main() {
    int p = 0;

    for(int i = 0; i < 6; i++) {
        float x = 0;
        cin >> x;

        if(x > 0) {
            p++;
        }
    }

    cout << p << " valores positivos\n";

    return 0;
}