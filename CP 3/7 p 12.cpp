#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std; 

int main(void) {
	char letter = 'A';
	vector <char> alphabet;
	for (; letter <= 'D'; letter++)
		alphabet.push_back(letter);
	while(next_permutation(alphabet.begin(), alphabet.end())) {
		for (auto l: alphabet)
			cout << l << " ";
		cout << endl;
	}
	return 0;
}