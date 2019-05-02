#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s; cin >> s; 
	vector <int> n, initial;
	for(int i=0; i<(int)s.size(); i++) {
		initial.push_back(s[i]-48);
	}
	n = initial;
	int four = count(n.begin(), n.end(), 4), seven = count(n.begin(), n.end(), 7);
	if ((int)n.size() % 2 != 0 || n[0] > 7) {
		if (four > seven) {
			n.push_back(7);
			seven++;
		}
		else {
			n.push_back(4);
			four++;
		}
		if (n[0] < 4) {
			n[0] = 4;
			four++;
		}
		else if (n[0] > 4 && n[0] < 7) {
			n[0] = 7;
			seven++;
		}
	}
	for(int i=1; (int)i<n.size(); i++) {
		if (four >= seven) {
			n[i] = 7;
			seven++;
		}
		else if (four <= seven) {
			n[i] = 4;
			four++;
		}
	}
	sort(n.begin(), n.end());
	int size = (int)n.size(); 
	int arr[size], arri[size];
	for(int i=0; i<size; i++) {
		arr[i] = n[i];
		arri[i] = initial[i];
	}
	while (lexicographical_compare(arr, arr+size, arri, arri+size))
	 	next_permutation(arr, arr+size);
	for (auto r: arr)
		cout << r;
	return 0;
}