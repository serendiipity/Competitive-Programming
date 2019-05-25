#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    while (cin >> s) {
        for (int i = 0; i < s.size(); i++) 
            printf("%c", s[i] - 7);
        cout << endl;
    }
    return 0;
}