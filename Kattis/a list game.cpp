#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    long long n; cin >> n;
    int s = (int)sqrt(n);
    int d = 2;
    int count = 0;
    while (d <= s) {
        if (n % d == 0) { 
            count++;
            n /= d;
        }
        else
            d++;
    }
    if (n > 2)
        count++;
    if (count)
        cout << count << endl;
    else
        cout << 1 << endl;
    
    return 0;
}
