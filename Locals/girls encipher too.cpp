
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int T; cin >> T;
    int N, L; cin >> N >> L;

    
    for (int k = 0; k<T; k++) {
    	    string word; cin >> word;
    	for(int i=0; i<L; i++) {
        	if (i % 2 == 0 || i % 3 == 0) {
        		if (word[i] == '@')
            		word[i] = '#';
            	else if (word[i] + N > 'z') {
                	word[i] += (N%26) - 26;
            	}
            	else {
                	word[i] = word[i] + N;
        		}
        	}
    	}
    	cout << word << endl;
    }
    
    return 0;
}