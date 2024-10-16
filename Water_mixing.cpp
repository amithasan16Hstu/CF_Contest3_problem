#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        
        int tempDifference = B - A;
        
        if (tempDifference <= X && tempDifference >= -Y) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
