#include <iostream>

using namespace std;

int main() {
    int par = 0;
    int impar = 0;
    int posi = 0;
    int nega = 0;

    for(int i = 0; i < 5; i++) {
        int x;
        cin >> x;

        if(x % 2 == 0) {
            par++;
        } else {
            impar++;
        }

        if(x) {
            if(x > 0) {
                posi++;
            } else {
                nega++;
            }
        }
    }

    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << posi << " valor(es) positivo(s)\n";
    cout << nega << " valor(es) negativo(s)\n";

    return 0;
}
