#include <iostream> 
#include <string>
using namespace std; 

int main(void) {
	string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int year; cin >> year;
	int sum = 0;
	if (year == 2017)
		cout << "Wednesday" << endl;
	else if (year > 2017) {
		sum += 298; 
		for (int i=2018; i<year; i++) {
			if (i % 4 == 0) { 
				if (i % 100 != 0) {
					sum += 366;
				}
				else if (i % 400 == 0) {
					sum += 366;
				}
				else {
					sum += 365;
				}
			}
			else {
				sum += 365;
			}
		}
		if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) 
			sum += 68;
		else
			sum += 67;
		int result = ((sum % 7) + 2)%7; 
		cout << days[result] << endl;
	}
	else {	
		sum += 365;
		for (int i=year+1; i<2017; i++) {
			if (i % 4 == 0) { 
				if (i % 100 != 0) {
					sum += 366;
				}
				else if (i % 400 == 0) {
					sum += 366;
				}
				else {
					sum += 365;
				}
			}
			else {
				sum += 365;
			}	
		}
		int result = (9 - (sum % 7)) % 7; 
		cout << days[result] << endl;
	}
	return 0;
}