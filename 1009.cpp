#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string n;
  double x, y;
  cout << fixed << setprecision(2);
  cin >> n;
  cin >> x >> y;
  cout << "TOTAL = R$ " << x + y/100*15 << endl;
  return 0;
}

