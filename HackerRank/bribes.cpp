#include <iostream>
#include <vector>
using namespace std;

void minimumBribes(vector<int> q) {
    int bribed = 0;
    for (int i = 0; i < q.size(); i++) {
        if (q[i] - i > 3) {
            cout << "Too chaotic" << endl;
            return;
        }
        int move = q[i] - i - 1;
        if (move > 0) {
            bribed += move;
        }
    }
    cout << bribed << endl;
}

int main(void) {
    int p; cin >> p;
    vector <int> q;
    while (p--) {
        int x; cin >> x;
        q.push_back(x);
    }
    minimumBribes(q);
}