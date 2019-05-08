#include <iostream> 
#include <vector> 
#include <queue>
using namespace std; 
typedef vector < vector <int> > vvi;

class Graph {
	public:
		int E;
		int V; 
		vvi adj_list;
		vector <bool> visited; 
		vector <int> distance; 
		Graph(vvi list, int n, int m) {
			V = n; 
			E = m;
			adj_list = list;
			visited = * new vector <bool> (n+1, false);
			distance = * new vector <int> (n+1, -1);
		}
};

Graph * build_graph() {
	int n, m; cin >> n >> m; 
	vvi adj_list (n+1);
	while (m--) {
		int u, v; cin >> u >> v; 
		adj_list[u].push_back(v);
		adj_list[v].push_back(u);
	}
	return new Graph(adj_list, n, m);
}

void BFS(Graph * graph, int s) {
	queue <int> q;
//	cout << s << " ";
	q.push(s);
	while (!q.empty()) {
		int u = q.front(); q.pop();
		cout << u << " "; 
		if (!graph->visited[u]) {
			for (auto v: graph->adj_list[u]) {
				if (graph->distance[v] == -1) {
					q.push(v);
					graph->distance[v] = graph->distance[u] + 1;
				} 
			}
		}
		graph->visited[u] = true;
	//	BFS(graph, u);
	}
}

int main(void) {
	Graph * graph = build_graph();
	int s; cin >> s;
	graph->distance[s] = 0;
	BFS(graph, s);
	cout << "distance of 1 from 2 is " << graph->distance[2] << endl;
	return 0;
}