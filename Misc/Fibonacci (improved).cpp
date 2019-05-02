#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int n) {
    // write your code here
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
        vector <long long> F(n+1);
        F[0] = 0;
        F[1] = 1;
        for (int i=2; i<=n; i++)
            F[i] = F[i-1] + F[i-2];
        return F[n];
    }
}

int main() {
    int n = 0;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
