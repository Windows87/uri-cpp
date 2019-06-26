#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    int co = 0;
    int c = 0;
    int r = 0;
    int s = 0;

    for(int i = 0; i < n; i++) {
        int x;
        char t;
        
        cin >> x >> t;

        co += x;

        if(t == 'C') {
            c += x;
        } else if (t == 'R') {
            r += x;
        } else {
            s += x;
        }
    }

    cout << "Total: " << co << " cobaias\n";
    cout << "Total de coelhos: " << c << "\n";
    cout << "Total de ratos: " << r << "\n";
    cout << "Total de sapos: " << s << "\n";

    cout << fixed << setprecision(2);

    float pc = 100.0 / co * c;
    float pr = 100.0 / co * r;
    float ps = 100.0 / co * s;

    cout << "Percentual de coelhos: " << pc << " %\n";
    cout << "Percentual de ratos: " << pr << " %\n";
    cout << "Percentual de sapos: " << ps << " %\n";

    return 0;
}