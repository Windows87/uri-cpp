#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    if(a == "vertebrado") {
      if(b == "ave") {
        if(c == "carnivoro") {
          cout << "aguia" << endl;
        } else {
          cout << "pomba" << endl;
        }
      } else {
        if(c == "onivoro") {
          cout << "homem" << endl;
        } else {
          cout << "vaca" << endl;
        }
      }
    } else {
      if(b == "inseto") {
        if(c == "hematofago") {
          cout << "pulga" << endl;
        } else {
          cout << "lagarta" << endl;
        }
      } else {
        if(c == "onivoro") {
          cout << "minhoca" << endl;
        } else {
          cout << "sanguessuga" << endl;
        }
      }
    }

    return 0;
}
