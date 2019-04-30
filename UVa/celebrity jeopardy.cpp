#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    string line;
    vector <string> a;
    while (getline(cin, line)) {
        a.push_back(line);
    }
    for (auto r : a)
        cout << r << endl;
    return 0;
}
