#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;

    
    int X3, Y3, X4, Y4;
    cin >> X3 >> Y3 >> X4 >> Y4;

   
    int deltaX1 = X2 - X1;
    int deltaY1 = Y2 - Y1;
    int deltaX2 = X4 - X3;
    int deltaY2 = Y4 - Y3;

   
    if (deltaY1 * deltaX2 == deltaY2 * deltaX1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
