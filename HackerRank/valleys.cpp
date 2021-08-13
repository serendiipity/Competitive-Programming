#include <iostream> 
using namespace std; 

int main(void) {
    int steps; cin >> steps; 
    int position = 0;
    bool below = false;
    int valleys = 0;
    while (steps--) {
        char s; cin >> s;
        s == 'U' ? position++ : position--;
        if (position == 0 && below) {
            valleys++;
            below = false;
        }
        if (position < 0) {
            below = true;
        }
    }
    cout << (valleys ? valleys : 0) << endl;

    return 0;
}