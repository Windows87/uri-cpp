#include <iostream>

using namespace std;

int main() {
  int x, y;

  cin >> x;

  for(int i = 0; i < x; i++) {
    cin >> y;
    if(y % 2 == 0) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }
  }

  return 0;
}
