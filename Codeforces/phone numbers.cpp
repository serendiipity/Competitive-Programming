#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

bool check(const string a, const string b) {
	int min, max;
	string A = a;
	string B = b;
	if (A.size() <= B.size()) {
		min = A.size();
		max = B.size();
	}
	else {
		min = B.size();
		max = A.size();
	}
	int i = min-1, j= max-1;
	if (B.size() <= B.size()) {
		string temp = B; 
		A = B; 
		B = temp;
	}
	while (j>=0 && i>=0) {
		if (A[i] != B[j])
			return false;
	i--; 
	j--;
	}
	return true;
}

int main() {
	int n; cin >> n; 
	map <string, set <string> > record;
	for (int i=0; i<n; i++) {
		string name; cin >> name;
		int phones; cin >> phones; 
		while(phones--) {
			string number; cin >> number;
			record[name].insert(number);
		}
	}
	for (auto r: record) {
		set <string> :: iterator i; 
		i = r.second.begin();
		for (; i != r.second.end(); i++) {
			set <string> :: iterator j;
			j = i;
			for (; j != r.second.end(); j++) {
				if(check(*i, *j)) {
					if ((*j).size() >= (*i).size()) {
						cout << "erasing " << *j << endl;
						r.second.erase(*j);
					}
					else {
						cout << "erasing " << *i << endl;
						r.second.erase(*i);
					}
				}
				
			}
		}
	}
	for (auto r: record) {
		set <string> :: iterator it;
		cout << r.first << " ";
		for (it = r.second.begin(); it != r.second.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}

// apparently did not understand crap from this 