#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int X, Y;
        cin >> X >> Y;  
        int moves = 0;
        if (Y > 1) {
            moves = (X / Y) + (X % Y);
        } else {
            moves = X;  
        }

        cout << moves << endl; 
    }

    return 0;
}
