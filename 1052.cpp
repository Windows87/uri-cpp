#include <iostream>

using namespace std;

int main() {
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int x;
    cin >> x;
    cout << months[x - 1] << "\n";
    return 0;
}