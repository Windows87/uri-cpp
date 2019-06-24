#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x > y) {
      if(!(x % y)) {
        cout << "Sao Multiplos" << endl;
      } else {
        cout << "Nao sao Multiplos" << endl;
      }
    } else {
      if(!(y % x)) {
        cout << "Sao Multiplos" << endl;
      } else {
        cout << "Nao sao Multiplos" << endl;
      }
    }
    return 0;
}
