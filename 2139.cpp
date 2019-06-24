#include <iostream>

using namespace std;

int main() {
  int m[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int x, y, s;
  
  while(cin >> x >> y) {
    s = 0;  
      
    for(int i = 0; i < x - 1; i++) {
      s = s + m[i];
    }
    
    s = s + y;
    
    if(s == 359) {
      cout << "E vespera de natal!\n";
    } else if(s == 360) {
      cout << "E natal!\n";
    } else if(s < 360) {
      cout << "Faltam " << 360 - s << " dias para o natal!\n";
    } else {
      cout << "Ja passou!\n";
    }
  }
}
