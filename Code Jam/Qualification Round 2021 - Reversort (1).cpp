#include <iostream>
#include <vector>
using namespace std;

void reverse(vector <int> & v, int l, int r) {
    int temp;
    for (int i = l, j = r; i < j; i++, j--) {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main() {
    int T; cin >> T;
    for (int t = 1; t <= T; t++) {
        int n; cin >> n;
        vector <int> v;
        int cost = 0;
        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n - 1; i++) {
            int min = 101;
            int min_index;
            for (int j = i; j < n; j++) {
                if (v[j] < min) {
                    min = v[j];
                    min_index = j;
                }
            }
            reverse(v, i, min_index);
            cost += min_index - i + 1;
        }
        cout << "Case #" << t << ": " << cost << endl;
    }
    return 0;
}