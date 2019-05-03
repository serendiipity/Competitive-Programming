#include <iostream> 
#include <algorithm> 
#include <vector>
using namespace std; 

typedef struct {
	int value, index;
} number;

bool sort_index(number * a, number * b) {
	return a->index < b->index;
}

bool sort_value(number * a, number * b) {
	return a->value < b->value;
}

int main(void) {
	int n; cin >> n; 
	int i = 0;
	vector <number*> values; 
	while (n--) {
		int x; cin >> x;
		number * num = new number();
		num->value = x; 
		num->index = i;
		i++;
		values.push_back(num);
	}
	if (values.size() == 2)
		cout << 1 << endl;
	else {
		sort(values.begin(), values.end(), sort_value);
		// cout << "sorted by value " << endl;
		// for (auto r: values)
		// 	cout << r->value << " ";
		// cout << endl;
		i = 1;
		int count = 0;
		while (count<values.size() && i<values.size() && values[i]->value == values[i-1]->value) {
			count++;
			i++;
		}
		vector <number*> :: iterator it;
		it = values.begin();
		advance(it, count+1);
		sort(values.begin(), it, sort_index);
		int min;
		min = values.size();
		for (int j=1; j<=count; j++) {
			// cout << "j: " << j << " count: " << count << endl;
			// cout << "[j] - [j-1] = " << values[j]->index << " - " << values[j-1]->index << endl;
			if (values[j]->index - values[j-1]->index < min) {
				min = values[j]->index - values[j-1]->index;
				// cout << "min is " << min << endl;
			}
		}
		cout << min << endl;
	}
	return 0;
}