#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector < vector <int> > vvi;

class Graph {
	public: 
		int V; 
		int E; 
		vector <bool> visited; 
		vector <int> distance; 
		vvi adj_list; 
		Graph(vvi list, int n, int m) {
			adj_list = list; 
			V = n; 
			E = m; 
			visited = * new vector <bool> (n+1, false);
			distance = * new vector <int> (n+1, -1);
		}
};

void BFS(Graph * graph, int s) {
	queue <int> q; 
	q.push(s);
	graph->distance[s] = 0;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		if (!graph->visited[u]) {
			graph->visited[u] = true;
			for (auto v: graph->adj_list[u]) {
				if (graph->distance[v] == -1) {
					q.push(v);
					graph->distance[v] = graph->distance[u] + 1;
				}
			}
		}
	}
}

Graph * build_graph() {
	int n, m; cin >> n;
	m = n-1;
	vvi adj_list (n+1);
	if (m != 0) {
		while (m--) {
			int u, v; cin >> u >> v;
			adj_list[u].push_back(v);
			adj_list[v].push_back(u);
		}
	}
	return new Graph(adj_list, n, m);
}

int count_vertices(vector <int> & v, int level) {
	int l = 0;
	int h = (int) v.size() - 1;
	int first_occurence = -1, last_occurence = -1;
	while (l <= h) {
		int m = (l + h) / 2;
		if (v[m] == level) {
			if (v[m-1] == level && first_occurence == -1) {
				h = m-1;
			} else {
				if (first_occurence == -1) {
					first_occurence = m;
					l = m+1;
					h = (int) v.size() - 1;
				} else if (m == v.size() -1 || v[m+1] != level){
					last_occurence = m;
					break;
				} else if (v[m+1] == level) {
					l = m+1;
				}
			}
		} else if (v[m] < level) {
			l = m+1;
		} else if (v[m] > level) {
			h = m-1;
		}
	}
	if (last_occurence == -1 && first_occurence == -1)
		return 0;
	else if (last_occurence == -1 && first_occurence > 0)
		return 1; 
	else 
		return last_occurence - first_occurence + 1;
	
}

int main() {
	Graph * graph = build_graph();
	if (graph->V != 0) {
		BFS(graph, 1);
		if (graph->E != 0) {
			sort(graph->distance.begin(), graph->distance.end());
			int level; cin >> level;
			cout << count_vertices(graph->distance, level-1);
		}
	}
	return 0;
}