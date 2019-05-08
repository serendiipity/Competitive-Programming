#include <iostream>
#include <vector>
using namespace std;
typedef vector < vector <int> > vvi;

class Graph {
	public: 
		int E;
		int V;
		vvi adj_list;
		vector <bool> visited; 
		Graph (vvi list, int n, int m) {
			V = n; 
			E = m;
			adj_list = list;
			visited = * new vector <bool> (V+1, false);
		}
};

void DFS(Graph * graph, int s) {
	cout << s << " ";
	graph->visited[s] = true; 
	if (!graph->adj_list[s].empty())
		for (auto v: graph->adj_list[s])
			if (!graph->visited[v])
				DFS(graph, v);
}

int main() {
	int n; cin >> n;
	int m; cin >> m;
	vvi adj_list (n+1);
	while (m--) {
		int u; cin >> u; 
		int v; cin >> v;
		adj_list[u].push_back(v);
	}
	Graph * graph = new Graph(adj_list, n, m);
	int s; cin >> s;
	DFS(graph, s);
	return 0;
}