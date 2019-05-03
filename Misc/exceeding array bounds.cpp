#include <iostream> 
#include <cstring>
using namespace std; 

void printChars(char letters[]) {
	char localArray[2];
	strcpy(localArray, letters);
	for (int i=0; i<4; i++)
		cout << localArray[i] << " ";	
}

main () {
	char letters[] = {'a', 'b', 'c', 'd'};
	printChars(letters);
	cout << "done" << endl;
}