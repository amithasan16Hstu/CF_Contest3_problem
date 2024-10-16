#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d, K;
        cin >> a >> b >> c >> d >> K;

       
        int Distance = abs(a - c) + abs(b - d);

        if (K >= Distance && (K - Distance) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
