#include <iostream>
#include <vector>
using namespace std;

int pisano(long long n, int m) {
//	long long size = m * m;
	vector <int> P(10*m);
	int count=0;
	P[0]=0;
	P[1]=1;
	P[2]=1;
	for (int i=3; i<=10*m; i++) {
		P[i] = ( P[i-1] + P[i-2] ) % m;
		if (P[i-1] == 1 && P[i-2] == 0) {
			count = i-2;
			break;
		}
	}
/*	for (auto r: P)
	cout << r << " ";
	cout << endl;*/
	return P[n%count];
}

int main(void) {
	long long n; cin >> n;
	int m; cin >> m;
	if (n==0)
	 	cout << m << endl;
	else
		cout << pisano(n, m) << endl;
	return 0;
}