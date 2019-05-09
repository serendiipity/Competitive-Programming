#include <iostream>
using namespace std;

int binary_search(int A[], int l, int r, int target, int flag) {
	if (l < r)
		return -1;
	int mid = (l + r) / 2;
	if (flag == 0) { // looking for left boundary
		if (A[mid] < target) {
			if (A[mid + 1] >= target)
				return mid + 1;
			else 
				binary_search(A, mid + 2, r, target, flag);
		} else if (A[mid] > target) {
			if (A[mid - 1] < target)
				return mid - 1; 
			else 
				binary_search()
		}
	} else if (flag == 1) { // right boundary
		
	}
}

int main() {
	int N, M; cin >> N >> M;
	while (N != 0 && M != 0) {
		int hills[N][M];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int x; cin >> x;
				hills[i][j] = x;
			}
		}
		int q; cin >> q;
		while (q--) {
			int a, b; cin >> a >> b;
			for (int i = 0; i < M; i++) {
				int c = binary_search(hills[i], 0, M - 1, a, 0);
				int d = binary_search((hills[i], 0, M - 1, 1);
				// handle case where -1 is returned
				
			}
		}
	}
	return 0;
}