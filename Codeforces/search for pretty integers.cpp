#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int a, minA, b, minB; cin >> a >> b; 
	vector <int> n;
	vector <int> result(a+b);
	int A[a], B[b]; 
	for (int i=0; i<a; i++) {
		int x; cin >> x;
		A[i] = x;
		if (i==0)
			minA = x;
		if (x < minA)
			minA = x;
	}
	for (int i=0; i<b; i++) {
		int x; cin >> x;
		B[i] = x;
		if (i==0)
			minB = x;
		if (x < minB)
			minB = x;
	}
	int min, max;
	if (minA <= minB) {
		min = minA;
		max = minB;
	}
	else {
		min = minB;
		max = minA;
	}
	int m;
	if (min == max)
		m = min;
	else 
		m = min * 10 + max;
	vector <int> :: iterator it;
	sort(A, A+a);
	sort(B, B+b);
	it = set_intersection(A, A+a, B, B+b, result.begin());
	result.resize(it - result.begin());
	for (auto r: result) {
		if (r < m)
			m =r;
	}
	cout << m  << endl;
	return 0;
}