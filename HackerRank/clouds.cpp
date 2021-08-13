#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n; cin >> n; 
    int pos = 0;
    int count = 0;
    vector <int> clouds;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        clouds.push_back(c);
    }
    for (int pos = 0; pos < n - 1;) {
        if (clouds[pos + 2] == 0) {
            pos += 2;
        } else {
            pos++;
        }
        count++;
    }
    cout << count << endl;
    
    return 0;
}