#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main (void) {
    vector < pair <long long, long long> > numbers;
    long long a, b;
    cin >> a >> b;
    while (a != 0) {
        numbers.push_back(make_pair(a, b));
        cin >> a >> b;
    }
    for(int i=0; i<numbers.size(); i++) {
        cout << (int)(get<0>(numbers[i]) / get<1>(numbers[i])) << " " << get<0>(numbers[i]) % get<1>(numbers[i]) << " / " << get<1>(numbers[i]) << endl;
    }
    return 0;
}