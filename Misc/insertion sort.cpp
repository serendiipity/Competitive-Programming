#include <iostream> 
#include <vector> 
using namespace std; 

void insertion_sort(vector <int> & numbers) {
	for (int i=2; i<numbers.size(); i++) {
		int key = numbers[i];
		int j = i-1;
		if (numbers[0]>numbers[1]) {
			int temp = numbers[0];
			numbers[0]=numbers[1];
			numbers[1]=temp;
		}
		while (numbers[j]>key && j>0) {
			numbers[j+1] = numbers[j];
			j--;
		} 
		numbers[j+1] = key;
	}
}

int main(void) {
	int n; cin >> n; 
	vector <int> numbers;
	while (n--) {
		int x; cin >> x;
		numbers.push_back(x);
	}
	insertion_sort(numbers);
	for (auto n: numbers)
		cout << n << " "; 
	cout << endl;
	return 0;
}