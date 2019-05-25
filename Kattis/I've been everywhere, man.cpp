#include <set>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    set <string> cities;
    int cases; cin >> cases;
    vector <int> results;
    results.reserve(cases);
    while (cases--) {
        int n; cin >> n;
        while (n--) {
            string c; cin >> c;
            cities.insert(c);
        }
        results.push_back((int)cities.size());
        cities.clear();
    }
    for (auto c : results)
        cout << c << endl;
    return 0;
}
