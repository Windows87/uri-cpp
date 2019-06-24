#include <iostream>

using namespace std;

int main(){
    int x;

 cin.tie(NULL);
 cout.sync_with_stdio(false);

    cin >> x;
    for(int i = 0; i < x; i++) {
        long y;
        cin >> y;
        if(y % 4 == 0) {
            cout << "1\n";
        } else {
            if(y / 4.0 - y / 4 == 0.75) {
                cout << "3\n";
            } else {
                if(y / 4.0 - y / 4 == 0.5) {
                    cout << "9\n";
                } else {
                    cout << "7\n";
                }
            }
        }
    }
    return 0;
}

