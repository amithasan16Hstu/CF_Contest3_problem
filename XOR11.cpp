#include <bits/stdc++.h>
using namespace std;


long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}


long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int A, B;
    cin >> A >> B;
    long long combinations = nCr(A, B);
    long long permutations = nPr(A, B);

    cout  << combinations << " "<<permutations << endl;

    return 0;
}
