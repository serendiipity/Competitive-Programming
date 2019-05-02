#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std; 

void fill(list <int> adjList[10]) {
	for (int i=0; i<8; i++) {
		int n; cin >> n;
		for (int j=0; j<n; j++) {
			int x; cin >> x;
			adjList[i].push_back(x);
		}
	}
}

void BFS(list <int> adjList[10], int source) {
	vector <int> visited(10,0);
	cout << source << " ";
	visited[source]++;
	queue <int> Q;
	Q.push(source);
	while (!Q.empty()) {
		int vertex; 
		vertex = Q.front();
		Q.pop();
		list <int> :: iterator it;
		it = adjList[vertex].begin();
		for (; it != adjList[vertex].end(); it++) {
			if (!visited[*it]) {
				Q.push(*it);
				cout << *it << " ";
				visited[*it]++;
			}
		}
	}
}

int main(void) {
	list <int> adjList[10];
	fill(adjList);
	BFS(adjList, 4);
	return 0;
}