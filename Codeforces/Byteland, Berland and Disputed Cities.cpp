#include <iostream>
#include <vector>
using namespace std;

class Node {
	public: 
	int x;
	vector <Node> neighbors;
	char type;
	Node (int, vector <Node>);
};

Node::Node(int d, vector <Node> n, char l) {
	x = d;
	neighbors = n;
	type = l;
}

int main() {
	// your code goes here
	int n; cin >> n;
	while (n--) {
		int d; cin >> d; 
		char l; cin >> l;
		vector <Node> cities;
		
	}
	return 0;
}