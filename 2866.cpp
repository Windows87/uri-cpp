#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for(int nIndex = 0; nIndex < n; nIndex++) {
    string a, b;
    b = "";
    cin >> a;
  
    for(int i = 0; i <= a.size(); i++) {
          char c = a[a.size() - i];
          
          if(islower(c)) {
            b = b + c;
          }
    }

    cout << b << endl;
  }

  return 0;
}
