#include <iostream>
#include <vector>
#define N 10000
using namespace std;
typedef vector < vector <int> > vvi;


class Graph {
	public:
		int E; 
		int V; 
		vvi adj_list; 
		vector <bool> visited; 
		Graph (vvi list, int n, int m) {
			E = m; 
			V = n; 
			adj_list = list; 
		}
};

Graph * build_graph() {
	int E; cin >> E;
	vvi adj_list (N+1);
	for (int i = 0; i < E; i++) {
		int x, y; cin >> x >> y;
		adj_list[x].push_back(y);
		adj_list[y].push_back(x);
	}
	return new Graph(adj_list, N, E);
}

int main() {
	int T; cin >> T; 
	while (T--) {
		Graph * graph = build_graph();
		int count = 0;
		for (auto v: graph->adj_list)
			if (v.empty())
				count++;
		cout << N - count + 1 << endl;
	}
	return 0;
}