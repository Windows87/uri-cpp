#include <iostream>

using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        cout << "I=" << 1 + i * 2 << " J=7\n";
        cout << "I=" << 1 + i * 2 << " J=6\n";
        cout << "I=" << 1 + i * 2 << " J=5\n";
    }
    return 0;
}