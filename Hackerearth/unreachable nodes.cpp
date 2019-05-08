#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
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

void DFS(Graph * graph) {
	stack <int> dfs_stack;
	int s; cin >> s; 
	dfs_stack.push(s);
	graph->visited[s] = true;
	while (!dfs_stack.empty()) {
		int u = dfs_stack.top(); dfs_stack.pop();
		for (auto v: graph->adj_list[u]) {
			if (!graph->visited[v]) {
				dfs_stack.push(v);
				graph->visited[v] = true;
			}
		}
	}	
}

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

int count_unvisited(Graph * graph) {
	int count = 0; 
	int i = 1;
	sort(graph->visited.begin(), graph->visited.end());
	while (!graph->visited[i] && i <= graph->V) {
		count++;
		i++;
	}
	return count;
}

int main() {
	Graph * graph = build_graph();
	DFS(graph);
	cout << count_unvisited(graph);
	return 0;
}