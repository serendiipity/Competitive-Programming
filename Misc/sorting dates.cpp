#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std; 

typedef struct {
	int day; 
	int month; 
	int year;
} triplet;

bool sort_by_day(triplet * a, triplet * b) {
	return a->day < b->day;
}

bool sort_by_month(triplet * a, triplet * b) {
	return a->month < b->month;
}

bool sort_by_year(triplet * a, triplet * b) {
	return a->year < b->year;
}

int main(void) {
	int n; cin >> n; 
	vector <triplet*> arr;
	arr.reserve(n);
	while (n--) {
		int d, m, y; cin >> m >> d >> y;
		triplet * x = new triplet();
		x->day = d; 
		x->month = m; 
		x->year = y;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end(), sort_by_month);
	int j;
	for (int i=0; i<arr.size()-1; i++) {
		j = i;
		while (arr[i]->month == arr[i+1]->month && j<arr.size())
			j++;
		sort(arr.begin()+i, arr.begin()+j, sort_by_day);
	}
	for (int i=0; i<arr.size()-1; i++) {
		j = i;
		while (arr[i]->day == arr[i+1]->day && j<arr.size())
			j++;
		sort(arr.begin()+i, arr.begin()+j, sort_by_year);
	}
	for (auto r: arr) 
		cout << r->month << " " << r->day << " " << r->year << endl;
	return 0;
}