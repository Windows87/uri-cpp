#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        float n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        cout << fixed << setprecision(1);
        cout << (n1*2 + n2*3 + n3*5)/10 << '\n';
    }

    return 0;
}