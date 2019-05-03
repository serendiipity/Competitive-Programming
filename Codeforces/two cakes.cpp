#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std; 

typedef struct {
	int pieces;
	char cake;
} plate;

bool custom_min(plate * a, plate * b) {
	return a->pieces < b->pieces;
}

int main(void) {
	int n, a, b; cin >> n >> a >> b;
	int min;
	int first=0, second=0, flag=0;
	if ((a != b && b<=n && a>=n) || (a != b && b>=n && a<=n)) {
		if (b<a) {
			int temp = a; 
			a = b; 
			b = temp; 
		}
		a < b/(n-1) ? first = a : first = b/(n-1);
		flag++;
	}
		vector <plate*> plates;
		plates.reserve(n);
		if (b>a) {
			int temp = a; 
			a = b; 
			b = temp;
		}
		for (int i=0; i<n; i++) {
			plate * p = new plate();
			p->pieces = 0;
			plates.push_back(p);
		}
		for (int i=0; a>0; i++) {
			i = i%n;
			if (i == 0 || i % 2 == 0) {
				plates[i]->pieces++;
				plates[i]->cake = 'a';
				a--;
			}
		}
		for (int j=0; b>0; j=(j+1)%n) {
			if (plates[j]->cake != 'a') {
				plates[j]->pieces++;
				plates[j]->cake = 'b';
				b--;
			}
		}
		sort(plates.begin(), plates.end());
		/*cout << "plates are ";
		for (auto r: plates)
			cout << r->pieces << " ";
		cout << endl;*/
		second = (*min_element(plates.begin(), plates.end(), custom_min))->pieces;
		if (second == 0)
				second = 1;
		if (flag)
			first > second ? min = first : min = second;
		else 
			cout << second;
		cout << endl;
	return 0;
}
// what the hell?