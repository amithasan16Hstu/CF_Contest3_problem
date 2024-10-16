#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int U, V, A, S;
        cin >> U >> V >> A >> S;

        
        double Squared = U * U - 2 * A * S;

        if (Squared <= V * V) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
