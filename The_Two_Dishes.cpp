#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int N, S;
        cin >> N >> S;  
        if (S <= N) {
            cout << S << endl;
        } else {
            cout << 2 * N - S << endl;
        }
    }
    return 0;
}
