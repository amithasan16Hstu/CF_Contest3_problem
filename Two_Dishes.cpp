#include <bits/stdc++.h>
using namespace std;

bool canPrepareDishes(int N, int A, int B, int C) {
    
    for (int fvDishes = 0; fvDishes <= min(A, B); ++fvDishes) {
        int remainingFruits = A - fvDishes;
        int remainingVegetables = B - fvDishes;
        int maxFishDishes = min(remainingVegetables, C);
        
        if (fvDishes + maxFishDishes >= N) {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, A, B, C;
        cin >> N >> A >> B >> C;
        
        if (canPrepareDishes(N, A, B, C)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
