#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> & A, int p, int q, int r) {
	vector <int> L, R;
	for (int i = p; i <= q; i++) {
		L.push_back(A[i]);
	}
	for (int i = q+1; i <= r; i++) {
		R.push_back(A[i]);
	}
	int left = 0, right = 0;
	for (int i = p; i <= r; i++) {
		if (right == R.size()) {
			for (int j = left; j < L . size(); j++) {
				A[i] = L[j];
				i++;
			}
			return ;
		} else if (left == L.size()) {
			for (int j = right; j < R.size(); j++) {
				A[i] == R[j];
				i++;
			}
			return;
		} else if (L[left] <= R[right] && left < L.size()) {
			A[i] = L[left];
			left++;
		} else if (R[right] < L[left] && right < R.size()) {
			A[i] = R[right];
			right++;
		} 
	}
}

void merge_sort(vector <int> & A, int l, int r) {
	if (l < r) {
		merge_sort(A, l, (r+l)/2);
		merge_sort(A, (r+l)/2 + 1, r);
		merge(A, l, (r+l)/2, r);
	}
}

int main() {
	int n; cin >> n;
	vector <int> A; 
	while (n--) {
		int x; cin >> x;
		A.push_back(x);
	}
	merge_sort(A, 0, A.size()-1);
	for (auto n: A)
		cout << n << " ";
	cout << endl;
	return 0;
}