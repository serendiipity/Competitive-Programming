#include <iostream>
#include <vector>
using namespace std;


int get_fibonacci_last_digit(int n) {
    if (n==0 || n==1) 
        return n;
    else {
        vector <long long> F(n+1);
        F[0] = 0;
        F[1] = 1;
        for (int i=2; i<=n; i++)
            F[i] = ((F[i-1]%10) + (F[i-2]%10))%10;
        return F[n];
    }
}

int main() {
    int n;
    cin >> n;
    cout << get_fibonacci_last_digit(n) << endl;
    return 0;
}
