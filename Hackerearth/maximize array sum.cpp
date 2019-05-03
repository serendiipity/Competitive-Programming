#include <iostream> 
#include <vector> 
#include <tuple>
#include <map>
using namespace std; 

tuple <int, int, int> cross_max_subarray(vector <int> & numbers, int low, int high) {
	
}

tuple <int, int, int> max_subarray(vector <int> & numbers, int low, int high) {
	
}

void change(vector <int> & numbers, int k) {
	vector <int> arr; 
	for (int i = 0; i < (int) numbers.size(); i++) {
		if (numbers[i] >= k)
			arr.push_
	}
}

int main(void) {
	int T; cin >> T;
	while (T--) {
		vector <int> numbers; 
		int n; cin >> n; 
		map <int, bool> done;
	
		while (n--) {
			int x; cin >> x; 
			numbers.push_back(x);
			done.insert(make_pair(x, false));
		}
		for (int i = 0; i < (int) numbers.size(); i++) {
			if (!done[numbers[i]])
				change(numbers, numbers[i]);
		}
	}
	return 0;
}

// the hell I don't even think this one is about counting the max subarray 
// sum while you push_back 