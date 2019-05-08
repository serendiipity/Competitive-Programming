#include <iostream>
#include <stack>
#include <vector>
using namespace std;
typedef vector <vector <int>> vvi;

class Graph {
	public: 
		int V; 
		int E; 
		vvi adj_list; 
		vector <bool> visited; 
		Graph (vvi list, int n, int m) {
			adj_list = list; 
			E = m;
			V = n; 
			visited = * new vector <bool> (V+1, false);
		}
};

int main() {
	int n, m; cin >> n >> m;
	vvi adj_list (n+1);
	while (m--) {
		int u, v; cin >> u >> v;
		adj_list[u].push_back(v);
	}
	Graph * graph = new Graph(adj_list, n, m);
	stack <int> dfs_stack;
	int s; cin >> s;
	dfs_stack.push(s);
	while (!dfs_stack.empty()) {
		int u = dfs_stack.top(); dfs_stack.pop();
		if (!graph->visited[u]) {
			cout << u << " ";
			graph->visited[u] = true;
			if (!graph->adj_list[u].empty())
				for (auto v: graph->adj_list[u]) 
					if (!graph->visited[v])
						dfs_stack.push(v);
		}
	}
	return 0;
}