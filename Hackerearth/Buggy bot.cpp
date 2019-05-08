#include <iostream> 
#include <vector> 
#include <queue> 
#include <set>
using namespace std; 
typedef vector < vector <int> > vvi; 
typedef pair <int, int> pii;

set <int> dest;
int bug = -1;
int flag = 0;

class Graph {
	public:
		int E; 
		int V; 
		vvi adj_list; 
		vector <bool> visited; 
		Graph(vvi list, int n, int m) {
			adj_list = list; 
			E = m; 
			V = n;
			visited = * new vector <bool> (V+1);
		}
};

void execute(Graph * graph, queue <pii> & moves, int c) {
	int count = 0;
	int execution = 0;
	while (!moves.empty()) {
		if (bug == count && flag != 1) {
			flag = 1;
			if (!graph->adj_list[c].empty()) {
				for (auto v: graph->adj_list[c])
					execute(graph, moves, v);
				execution = 1;
			}
			flag = 0;
		} else {
			pii m = moves.front(); moves.pop();
			if (m.first == c)
				c = m.second;
		}
		count++;
	}
	if (bug == count && flag != 1) {
			flag = 1;
			for (auto v: graph->adj_list[c])
				execute(graph, moves, v);
			flag = 0;
	}
	if (!execution)
		dest.insert(c);
}

int main(void) {
	int n, m, k; cin >> n >> m >> k; 
	vvi adj_list (n+1);
	queue <pii> moves;
	while (m--) {
		int a, b; cin >> a >> b; 
		adj_list[a].push_back(b);
	}
	for (int i = 0; i < k; i++) {
		int x, y; cin >> x >> y; 
		moves.push(make_pair(x, y));
	}
	Graph * graph = new Graph(adj_list, n, m);
	int c = 1;
	while (bug <= k) {
		queue <pii> moves_copy = moves;
		execute(graph, moves_copy, c);	
		bug++;
	}
	cout << (int) dest.size() << endl;
	for (auto d: dest)
		cout << d << " ";
	return 0;
}