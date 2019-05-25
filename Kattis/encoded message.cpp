

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main(void) {
    int cases; cin >> cases;
    vector <string> list;
    list.reserve(cases);
    
    for (int k=0; k<cases; k++) {
        string message; cin >> message;
        list.push_back(message);
    }
    
    for (int j=0; j<cases; j++) {
        int len = (int)list[j].length();
        int root = sqrt(len);
        int count = root;
        int croot = root;

        while (count--) {
            int acc = croot;
            for (int i=0; i<root; i++) {
                cout << list[j][acc-1];
                acc += root;
            }
            croot--;
        }
        cout << endl;
    }

    return 0;
}
