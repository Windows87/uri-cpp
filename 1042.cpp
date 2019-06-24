#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int x, y, z, a, b, c;
    cin >> x >> y >> z;

    if(x > y && x > z) {
      a = x;
    } else {
      if(y > x && y > z) {
        a = y;
      } else {
        a = z;
      }
    }

    if(a == x) {
      if(y > z) {
        b = y;
        c = z;
      } else {
        b = z;
        c = y;
      }
    }

    if(a == y) {
      if(x > z) {
        b = x;
        c = z;
      } else {
        b = z;
        c = x;
      }
    }

    if(a == z) {
      if(x > y) {
        b = x;
        c = y;
      } else {
        b = y;
        c = x;
      }
    }

    cout << c << endl;
    cout << b << endl;
    cout << a << endl;
    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}
