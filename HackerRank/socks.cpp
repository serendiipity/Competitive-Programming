#include <iostream>
#include <map>
#include <set>
using namespace std;



int main() {
    int pile_size; cin >> pile_size;
    map <int, int> socks; // map to hold the number of socks by color
    set <int> colors; // set that holds the colors present

    while (pile_size--) {
        int c; cin >> c;
        colors.insert(c);
        if (socks.find(c) == socks.end()) { // check if the color is already present
            socks.insert(make_pair(c, 1));
        } else {
            socks[c]++; // increment the count of that color
        }
    } 
    
    // check the count of each present color to compute the number of pairs
    set <int>::iterator it = colors.begin();
    int pairs = 0; // total number of pairs
    while (it != colors.end()) {
        int count = socks[*it];
        pairs += count / 2;
        it++;
    }
    cout << pairs << endl;
}
