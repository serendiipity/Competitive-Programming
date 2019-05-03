#include <iostream> 
#include <utility> 
#include <vector> 
#include <queue>
#define oo (long long)1e12
using namespace std; 

typedef pair<long long, long long> pii; 
typedef vector <pii> vpii;

void djikstra(vector <vpii> graph, int s, int d) {
	int n = (int)graph.size();
	vector <long long> distance(n, oo);
	vector <bool> visited(n, false);
	priority_queue <pii, vpii, greater <pii>> pq; 
	vector <int> parent(n+1);
	distance[s] = 0;
	pq.push(make_pair(distance[s], s));
	while (!pq.empty()) {
		pii top = pq.top(); pq.pop();
		long long current = top.second;
		if (visited[current])
			continue;
		visited[current] = true;
		for (pii adj: graph[current]) {
			long long adj_node = adj.first;
			long long cost = adj.second; 
			long long new_cost = cost + distance[current];
			if (new_cost < distance[adj_node]) {
				distance[adj_node] = new_cost; 
				parent[adj_node] = current;
				pq.push(make_pair(distance[adj_node], adj_node));
			}
		}
	}
	if (visited[d]) {
		int node = d; 
		vector <int> path; 
		path.push_back(d);
		while (node != s) {
			path.push_back(parent[node]);
			node = parent[node];
		}
		for (int i=(int)path.size()-1; i>=0; i--) 
			cout << path[i] << " ";
		cout << endl;
	}
	else 
		cout << -1 << endl;
}

int main(void) { 
	int n, m; cin >> n >> m;
	// vector <int> visited(n+1); 
	vector <vpii> graph(n+1);
	for (int i=0; i<m; i++) {
		int e1, e2, cost; cin >> e1 >> e2 >> cost;
		pii edge = make_pair(e2, cost);
		graph[e1].push_back(edge);
	}
	djikstra(graph, 0, 6);
	return 0;
}
