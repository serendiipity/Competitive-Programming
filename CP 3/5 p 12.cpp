#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Birthday {
	public:
		int day, month, year;  
		Birthday(int, int, int);
};

Birthday::Birthday(int d, int m, int y) {
	day = d; 
	month = m; 
	year = y;
}

bool sort_age(Birthday a, Birthday b) {
	return a.year < b.year;
}

bool sort_day(Birthday a, Birthday b) {
	return a.day < b.day;
}

bool sort_month(Birthday a, Birthday b) {
	return a.month < b.month;
}

int main() {
	int n; cin >> n; 
	vector <Birthday > people;
	
	while (n--) {
		int d, m, y; cin >> d >> m >> y;
		Birthday bday = * new Birthday(d, m, y);
		people.push_back(bday);
	}
	
	sort(people.begin(), people.end(), sort_day);
	sort(people.begin(), people.end(), sort_month);
	sort(people.begin(), people.end(), sort_age);

	for (auto b: people)
		cout << b.day << " " << b.month << " " << b.year << endl;
		
	return 0;
}