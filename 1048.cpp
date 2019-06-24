#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    float a;
    int r;
    cin >> a;

    if(a > 0 && a <= 400) {
      r = 15;
    }

    if(a > 401 && a <= 800) {
      r = 12;
    }

    if(a > 800.01 && a <= 1200) {
      r = 10;
    }

    if(a > 1200.01 && a <= 2000) {
      r = 7;
    }

    if(a > 2000) {
      r = 4;
    }

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << a + a * 0.01 * r << endl;
    cout << "Reajuste ganho: " << a * 0.01 * r << endl;
    cout << "Em percentual: " << r << " %" << endl;

    return 0;
}
