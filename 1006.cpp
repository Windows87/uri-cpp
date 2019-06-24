#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double x, y, z;
  cout << fixed << setprecision(1);
  cin >> x >> y >> z;
  cout << "MEDIA = " << (x * 2 + y * 3 + z * 5) / 10 << endl;
  return 0;
}

