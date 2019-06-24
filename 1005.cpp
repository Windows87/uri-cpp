#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double x, y;
  cout << fixed << setprecision(1);
  cin >> x;
  cin >> y;
  cout << fixed << setprecision(5);
  cout << "MEDIA = " << (x * 3.5 + y * 7.5) / 11 << endl;
  return 0;
}

