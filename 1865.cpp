#include <iostream>

using namespace std;

int main() {
  int x, y;
  string z;
  cin >> x;

  for(int i = 0; i < x; i++) {
    cin >> z >> y;
    if(z == "Thor") {
      cout << "Y" << endl;
    } else {
      cout << "N" << endl;
    }
  }

  return 0;
}

