#include <iostream>

using namespace std;

int main() {
    for(int i = 0; i < 11; i++) {
        cout << "I=" << i*0.2 << " J=" << 1 + i*0.2 << '\n';
        cout << "I=" << i*0.2 << " J=" << 2 + i*0.2 << '\n';
        cout << "I=" << i*0.2 << " J=" << 3 + i*0.2 << '\n';
    }
    return 0;
}