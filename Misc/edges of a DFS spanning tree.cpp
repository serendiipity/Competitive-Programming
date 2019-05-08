#include <iostream>
#include <vector> 
#include <stack>
using namespace std;
typedef vector <vector <int>> vvi;
typedef pair <int, int> pii;

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

int main() {
	int n, m; cin >> n >> m; 
	vvi adj_list (n+1);
	stack <int> dfs_stack;
	vector <pii> st;
	while (m--) {
		int u, v; cin >> u >> v;
		adj_list[u].push_back(v);
	}
	Graph * graph = new Graph(adj_list, n, m);
	int s; cin >> s; 
	dfs_stack.push(s);
	graph->visited[s] = true;
	while (!dfs_stack.empty()) {
		int u = dfs_stack.top(); dfs_stack.pop();
		cout << u << " ";
		if (!graph->adj_list[u].empty()) {
			for (auto v: adj_list[u]) {
				if (!graph->visited[v]) {
					dfs_stack.push(v);
					graph->visited[v] = true;
					st.push_back(make_pair(u, v));
				}
			}
		}
	}
	cout << endl;
	for (auto e: st)
		cout << e.first << " " << e.second << endl;
	return 0;
}