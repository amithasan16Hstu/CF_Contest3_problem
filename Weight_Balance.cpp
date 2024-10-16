#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int w1, w2, x1, x2, M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;

        int minWeight = x1 * M;
        int maxWeight = x2 * M;
        int actualWeight = w2 - w1;

        if (actualWeight >= minWeight && actualWeight <= maxWeight) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
