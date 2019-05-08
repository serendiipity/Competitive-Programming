#include <iostream>
#include <vector> 
#include <stack>
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
			visited = * new vector <bool> (V+1, false);
		}
};

Graph * build_graph () {
	int n, m; cin >> n >> m;
	vvi adj_list (n+1);
	while (m--) {
		int u, v; cin >> u >> v; 
		adj_list[u].push_back(v);
		adj_list[v].push_back(u);
	}
	return new Graph(adj_list, n, m);
}

void DFS(Graph * graph, int s) {
	stack <int> dfs_stack; 
	dfs_stack.push(s);
	while (!dfs_stack.empty()) {
		int u = dfs_stack.top(); dfs_stack.pop(); 
		if (!graph->adj_list[u].empty())
			for (auto v: graph->adj_list[u])
				if (!graph->visited[v]) {
					dfs_stack.push(v);
					graph->visited[v] = true;
				}
		graph->visited[u] = true;
	}
}

int count_connected_comp(Graph * graph) {
	int count = 0;
	for (int i = 1; i <= graph->V; i++) {
		if (!graph->visited[i]) {
			DFS(graph, i);
			count++;
		}
	}
	return count;
}

int main() {
	Graph * graph = build_graph();
	cout << count_connected_comp(graph);
	return 0;
}