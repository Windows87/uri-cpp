#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int x, y;
  float z;
  cin >> x >> y;
  cout << fixed << setprecision(2);
  cin >> z;
  cout << fixed << setprecision(0);
  cout << "NUMBER = " << x << endl;
  cout << fixed << setprecision(2);
  cout << "SALARY = U$ " << y * z << endl;
  return 0;
}
