#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	string line;
	vector <string> results;
	int size = 0;
	while (getline(cin, line)) {
		if (line != "#") {
			if (line == "HELLO")
				results.push_back("ENGLISH");
			else if (line == "HOLA")
				results.push_back("SPANISH");
			else if (line == "HALLO")
				results.push_back("GERMAN");
			else if (line == "BONJOUR") 
				results.push_back("FRENCH");
			else if (line == "CIAO")
				results.push_back("ITALIAN");
			else if (line == "ZDRAVSTVUJTE")
				results.push_back("RUSSIAN");
			else 
				results.push_back("UNKNOWN");
			size++;
		}
		else 
			break;
	}
	for (int i=1; i<=size; i++) 
		cout << "Case " << i << ": " << results[i-1] << endl;
	return 0;
}