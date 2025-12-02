#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t++) {
        int x, n;
        cin >> x >> n;

        int hasil = (n % 2 == 0) ? 0 : x;
        cout << hasil << endl;
    }
    return 0;
}
