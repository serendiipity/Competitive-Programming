#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(void) {
    string line;
    int flag = 0;
    vector <string> results;
    while (getline(cin, line)) {
        for (int i=0; i<(int)line.size(); i++) {
            if (line[i] == '"' && flag == 0) {
                line.replace(i, 1, "``");
                flag = 1;
            }
            else if (line[i] == '"' && flag == 1) {
                line.replace(i, 1, "''");
                flag = 0;
            } 
        }
        results.push_back(line);
    }
    for (auto s : results)
        cout << s << endl;
    return 0;
}
