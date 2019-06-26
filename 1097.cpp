#include <iostream>

using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        cout << "I=" << 1 + i * 2 << " J=" << 7 + i * 2 << '\n';
        cout << "I=" << 1 + i * 2 << " J=" << 6 + i * 2 << '\n';
        cout << "I=" << 1 + i * 2 << " J=" << 5 + i * 2 << '\n';
    }
    return 0;
}