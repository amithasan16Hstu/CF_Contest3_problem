#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
    c = tolower(c); 
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowels(const string &s, int index) {
    if (index == s.length()) return 0;
    return isVowel(s[index]) + countVowels(s, index + 1);
}

int main() {
    string S;
    getline(cin, S);

    int numVowels = countVowels(S, 0);
    cout <<  numVowels << endl;

    return 0;
}
