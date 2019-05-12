#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int hour = 18000;

void process(vector <int> lights) {
	cout << "processing " << endl;
	int elapsed = 0;
	int size = lights.size();
	vector <int> time(size);
	fill(time.begin(), time.end(), 0);
	while (elapsed < hour) {
		for (int i = 0; i < size; i++) {
			time[i] += lights[i]	
			// you'll have to store their current time as well as their colors duh
		}
		elapsed++;
	}
}

int main() {
	vector <int> lights; 
	int x;
	while (true) {
		while (cin >> x && x != 0) {
			lights.push_back(x);
			cout << x  << " ";
		}
		cout << x << " ";
		process(lights); 
		lights.clear();
		if (cin >> x && x == 0) {
			cout << x << endl;
			cout << " breaking " << endl;
			break;
		} else {
			lights.push_back(x);
			cout << x << " ";
		}
	}
	return 0;
}