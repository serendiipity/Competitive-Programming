#include <iostream>
#include <vector> 
using namespace std;
typedef vector < pair < vector <int> :: iterator, vector <int> :: iterator > > vp;

class FlattenedIterator {
	vp numbers;
	int count;
	int visited;
	vp :: iterator it;
	public:
		FlattenedIterator(vp);
		vector <int> :: iterator next() {
			vector <int> :: iterator current;
			if ((*it).first != (*it).second) {
				current = (*it).first;
				(*it).first++;
				it++;
			} else if ((*it).first == (*it).second) {
				it++;
				current = (*it).first;
				(*it).first++;
				it++;
			}
			if (it == numbers.end())
				it = numbers.begin();
			visited++;
			return current;
		}
		bool hasNext() {
			return visited < count;
		}
		int count_items() {
			for (int i = 0; i < numbers.size(); i++)
				count += numbers[i].second - numbers[i].first;
			return count;
		}
};

FlattenedIterator::FlattenedIterator(vp input) {
	numbers = input;
	count = 0; 
	visited = 0;
	it = numbers.begin();
	count = count_items();
}

int main() {
	vp input; 
	vector <int> first = { 1, 2, 3 };
	vector <int> second = { 4, 5};
	vector <int> third = { 6, 7, 8 };
	input.push_back(make_pair(first.begin(), first.end()));
	input.push_back(make_pair(second.begin(), second.end()));
	input.push_back(make_pair(third.begin(), third.end()));
	FlattenedIterator it (input);
	while (it.hasNext())
		cout << *it.next() << " ";
	cout << endl;
	return 0;
}