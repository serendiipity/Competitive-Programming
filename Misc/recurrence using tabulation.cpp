#include <iostream>
#define m 1000000007
using namespace std; 

int arr[1001][1001];

int F(int x, int y) {
    if (x < 0 || y < 0)
        return 0;
    if (arr[x][y] == -1) {
        if (x == 0 || y == 0)
            arr[x][y] = 0;
        else if (x == 1 || y == 1) {
            arr[x][y] = abs(x-y) + x*y;
        } else {
            int sum = 0;
    		for (int i = x - 3; i <  x; i++) 
    			for (int j = y - 2; j < y; j++)
    				sum = sum + F(i, j);
    		arr[x][y] = sum % m;
        }
    }
    return arr[x][y];
}

void init() {
    for (int i = 0; i < 1001; i++) 
        for (int j = 0; j < 1001; j++)
            arr[i][j] = -1;
    F(1000, 1000);
}

int main() {
    int q; cin >> q;
    init();
    while (q--) {
        int x, y; cin >> x >> y;
        cout << arr[x][y] << endl; 
    }
    return 0;
}