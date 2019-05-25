#include <vector>
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
 
int main(void) {
    vector <long long> results;
    long long an, bn;
    while (scanf("%lld %lld", &an, &bn) == 2) {
        results.push_back(abs(an-bn));
    }
    vector <long long> :: iterator it;
    for (it = results.begin(); it != results.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}