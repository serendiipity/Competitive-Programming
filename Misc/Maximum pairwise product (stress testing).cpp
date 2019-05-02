#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
using namespace std;

void fill(vector <int> & numbers) {
	int n = rand() % 10 + 2;
	cout << "n is " << n << endl;
	numbers.resize(n);
	cout << "hello " << endl;
	for (int i = 0; i<n; i++) {
		int x = rand() % 100000;
		cout << "x is " << x << " ";
		numbers.push_back(x);
	}
	cout << endl;
}

long long max_pairwise(const vector <int> & numbers) {
	long long result = numbers[0];
	for (int i=0; i<(int)numbers.size(); i++) {
		for (int j=i+1; j<(int)numbers.size(); j++) {
			if (((long long)numbers[i]) * numbers[j] > result && i != j)
				result = ((long long)numbers[i]) * numbers[j];
		}
	}
	return result;
}

long long max_pairwise_better(const vector <int> & numbers) {
	int max1, max2, maxindex;
	max1 = numbers[0];
	for (int i=0; i<(int)numbers.size(); i++) {
		if (numbers[i]>max1) {
			max1 = numbers[i];
			maxindex = i;
		}
	}
	max2 = numbers[0];
	for (int i=0; i<(int)numbers.size(); i++) {
		if (numbers[i]>max2 && i != maxindex)
			max2 = numbers[i];
	}
	return ((long long)max2) * max1;
}

int main() {
	vector <int> numbers;
	while (1) {
		fill(numbers);
		long long first, second; 
		first = max_pairwise(numbers);
		second = max_pairwise_better(numbers);
		if (first == second)
			cout << "first is " << first  << " and second is " << second << endl;
		else {
			cout << "ERROR" << endl;
			cout << "first is " << first  << " and second is " << second << endl;

			break;
		}
	}
	return 0;
}