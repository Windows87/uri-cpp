// Example program
#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  while(cin >> a >> b >> c) {
    if(a == b && a == c && b == c) {
      cout << "*\n";
    } else if (a != b && a != c) {
      cout << "A\n";
    } else if (b != a && b != c) {
      cout << "B\n";
    } else {
      cout << "C\n";
    }
  }
}

