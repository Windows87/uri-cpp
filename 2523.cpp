#include <iostream>

using namespace std;

int main() {
  string x = "";
  int y;
  
  while(cin >> x) {
    cin >> y;
    int z[y];
    
    for(int i = 0; i < y; i++) {
      cin >> z[i];
    }
    
    string t = "";
    
    for(int e: z) {
      t = t + x[e - 1];
    }
    
    cout << t << '\n';
  }
}
