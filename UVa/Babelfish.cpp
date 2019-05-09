#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	string line;
	map <string, string> dictionary;
	vector <string> words;
	string first, second;
	while (getline(cin, line)) {
		int pos = line.find(" ");
		first = line.substr(0, pos);
		second = line.substr(pos+1, line.size());
		if (first == second)
			break;
 		dictionary.insert(make_pair(second, first));
	}
	while (getline(cin, line)) {
		if (line[0] == ' ')
			break;
		words.push_back(line);
	}
	for (auto w: words) {
		if (dictionary.count(w) != 0)
			cout << dictionary[w] << endl;
		else 
			cout << "eh" << endl;
	}
	return 0;
}