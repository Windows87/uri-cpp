#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(b > a) {
      cout << "O JOGO DUROU " << b - a << " HORA(S)" << endl;
    } else {
      cout << "O JOGO DUROU " << b + 24 - a << " HORA(S)" << endl;
    }
    return 0;
}

