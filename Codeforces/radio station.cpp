#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>
using namespace std;



int main() {
	int n, m; cin >> n >> m;
	vector  <string> results;
	map <string, string> names;
	while (n--) {
		string name, ip;
		cin >> name >> ip;
		names.insert(make_pair(ip, name));
	}
	while (m--) {
		string command, ip; cin >> command >> ip;
		string s_ip;
		s_ip = ip.substr(0, ip.size() - 1);
		results.push_back(command + " " + ip + " #" + names[s_ip]);
	}
	for(string s: results)
		cout << s << endl;
	return 0;
}