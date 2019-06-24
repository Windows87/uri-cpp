#include <iostream>

using namespace std;

int main() {
	string alfa[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    for(int i = 0; i < 26; i++) {
    	cout << 97 + i << " e " << alfa[i] << "\n";
    }
    return 0;
}