#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  float n1, n2, n3, n4, n5, m;
  cin >> n1 >> n2 >> n3 >> n4;
  m = (n1*2 + n2*3 + n3*4 + n4*1)/10;
  cout << fixed << setprecision(1);
  cout << "Media: " << m << endl;

  if(m >= 7.0) {
    cout << "Aluno aprovado." << endl;
    return 0;
  }

  if(m < 5.0) {
    cout << "Aluno reprovado." << endl;
    return 0;
  }

  cout << "Aluno em exame." << endl;
  cin >> n5;
  cout << "Nota do exame: " << n5 << endl;
  m = (m + n5) / 2;

  if(m >= 5.0) {
    cout << "Aluno aprovado." << endl;
  } else {
    cout << "Aluno reprovado." << endl;
  }

  cout << "Media final: " << m << endl;
  return 0;
}

