#include <iostream>
#include <vector> 
#include <map>
using namespace std;

int main() {
	int n, k; cin >> n >> k; 
	vector <int> probs;
	for (int i = 0; i < n; i++) {
		int x; cin >> x; 
		probs.push_back(x);
	}
	map <int, int> solved;
	for (int i = 0; i < n; i++)
		solved[i] = -1;
	int left = 0, right = n-1, count = 0;
	while (n > 0) {
		if (probs[left] > k && probs[right] > k) {
			break;
		}
		else if (probs[left] <= k && solved[left] == -1) {
			solved[left]++;
			count++;
			left++;
			n--;
		} else if (probs[right] <= k && solved[right] == -1) {
			solved[right]++;
			count++;
			right--;
			n--;
		}
	}
	cout << count << endl;
	return 0;
}