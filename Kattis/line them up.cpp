#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    int n; cin >> n;
    int count = n;
    vector <string> names;
    names.reserve(n);
    while (n--) {
        string person; cin >> person;
        names.push_back(person);
    }
    char b;
    if (names[0] == names[1])
        b = '=';
    else if (lexicographical_compare(names[0].begin(), names[0].end(), names[1].begin(), names[1].end()))
        b = '<';
    else
        b = '>';
    char c;
    c = b;
    if ( count > 2 ) {
        for (int i=2; i<names.size(); i++) {
            if (names[i-1] == names[i])
                b = '=';
            else if (lexicographical_compare(names[i-1].begin(), names[i-1].end(), names[i].begin(), names[i].   end()))
                b = '<';
            else
                b = '>';
        }
    }
    if (b != c || b == '=')
        cout << "NEITHER" << endl;
    else if (b == '>')
        cout << "DECREASING" << endl;
    else
        cout << "INCREASING" << endl;
    return 0;
}
