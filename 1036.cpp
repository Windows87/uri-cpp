#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c;
  d = b*b - 4 * a * c;
  
  if(d < 0 || !a) {
    cout << "Impossivel calcular" << endl;
    return 0;
  }

  cout << fixed << setprecision(5);
  cout << "R1 = " << (-b + sqrt(d))/(2*a) << endl;
  cout << "R2 = " << (-b - sqrt(d))/(2*a) << endl;
  return 0;
}

