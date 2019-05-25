#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
    int n; cin >> n;
    vector <string> first, second;
    first.reserve(n);
    second.reserve(n);
    while (n--) {
        string a, b; cin >> a >> b;
        first.push_back(a);
        second.push_back(b);
    }
    for(int i=0; i<first.size(); i++) {
        cout << first[i] << endl << second[i] << endl;
        for(int j=0; j<first[i].size(); j++) {
            if (first[i][j] != second[i][j])
                cout << "*";
            else
                cout << ".";
        }
        cout << endl;
    }
    return 0;
}
