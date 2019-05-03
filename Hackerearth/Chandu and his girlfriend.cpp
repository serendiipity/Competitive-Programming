#include <iostream>
#include <vector>
using namespace std;

void merge(vector <long long> & A, int p, int q, int r) {
	vector <long long> L, R; 
	for (int i = p; i <= q; i++)
		L.push_back(A[i]);
	for (int i = q+1; i <= r; i++) 
		R.push_back(A[i]);
	int left = 0, right = 0; 
	for (int i = p; i <= r; i++) {
		if (left == L.size()) {
			while (right < R.size()) {
				A[i] = R[right];
				right++;
				i++;
			}
			return;
		} else if (right == R.size()) {
			while (left < L.size()) {
				A[i] = L[left];
				left++;
				i++;
			}
			return;
		} else if (L[left] <= R[right]) {
			A[i] = R[right];
			right++;
		} else if (R[right] < L[left]) {
			A[i] = L[left];
			left++;
		}
	}
	
}

void merge_sort(vector <long long> & A, int l, int r) {
	if (l < r) {
		merge_sort(A, l, (l+r)/2);
		merge_sort(A, (l+r)/2+1, r);
		merge(A, l, (l+r)/2, r);
	}
}

int main() {
	int T; scanf("%d", &T);
	while (T--) {
		vector <long long> A;
		int n; scanf("%d", &n);
		while (n--) {
			long long x; scanf("%lld", &x);
			A.push_back(x);
		}
		merge_sort(A, 0, A.size()-1);
		for (auto a: A) 
			printf("%lld ", a);
		printf("\n");
		A.clear();
	}
	return 0;
}