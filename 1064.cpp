#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int p = 0;
    float n = 0;

    for(int i = 0; i < 6; i++) {
        float x;
        cin >> x;
        if(x > 0) {
            n += x;
            p++;
        }
    }

    cout << fixed << setprecision(1);
    cout << p << " valores positivos\n";
    cout << n/p << "\n";

    return 0;
}
