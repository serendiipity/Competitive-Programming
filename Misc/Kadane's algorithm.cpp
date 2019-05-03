#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n; 
	vector <int> numbers;
	while (n--) {
		int x; cin >> x; 
		numbers.push_back(x);
	}
	int answer = numbers[0], current = answer;
	for (int i = 1; i < (int) numbers.size(); i++) {
		if (current + numbers[i] > numbers[i])
			current += numbers[i];
		else 
			current = numbers[i];
		if (current > answer)
			answer = current;	
	}
	cout << answer << endl;
	return 0;
}