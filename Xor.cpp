#include <bits/stdc++.h>
using namespace std;


unsigned long long gcd(unsigned long long a, unsigned long long b) {
    while (b != 0) {
        unsigned long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    unsigned long long A, B;
    
    cin >> A >> B;
    
   
    unsigned long long gcd_result = gcd(A, B);
    
    
    unsigned long long lcm_result = (A / gcd_result) * B;
   
    cout << gcd_result << " " << lcm_result << endl;
    
    return 0;
}
