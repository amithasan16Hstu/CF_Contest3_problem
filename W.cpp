#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> array(N, vector<int>(M));

    
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            cin >> array[i][j];
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = M - 1; j >= 0; --j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
