#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int T; cin >> T;
	while (T--) {
		int size; cin >> size; 
		vector <int> arr;
		int s =0;
		while (size--) {
			int x; cin >> x; 
			arr.push_back(x);
		}
		for (int i=1; i<(int)arr.size()+1; i++) {
 				int result = sum[i] & arr[i-1];
				sum.push_back(result);
		}
		for (int i=0; i<(int)arr.size(); size++) {
			for (int j=i; j<(int)arr.size(); j++) {
				s &= (sum[i] & sum[j]);
			}
		}
	}
	return 0;
}