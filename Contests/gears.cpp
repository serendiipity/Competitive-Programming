#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string dir; // holds initial direction
 
class Graph
{
        int V;
        list<int> *adj; 
    public:
        Graph(int V);
        void new_edge(int v, int w); 
        bool is_reachable(int s, int d); 
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int> [V];
}
 
void Graph::new_edge(int v, int w)
{
    adj[v].push_back(w); 
}
 
bool Graph::is_reachable(int s, int d)
{
    if (s == d) {
    	cout << dir << endl;
        return true;
    }

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    list<int> queue;

    visited[s] = true;
    queue.push_back(s);
 
    list<int>::iterator i;
 
    while (!queue.empty())
    {

        s = queue.front();
        queue.pop_front();
        if (dir == "cw") 
        	dir = "ccw";
        else 
        	dir = "cw";
 
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
        	
            if (*i == d) {
            	cout << dir << endl;
                return true;
            }
 
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
 
    return false;
}
 
int main()
{
	
	int n, m; cin >> n >> m;
	Graph g(n);
	while (m--) {
		int u, v; cin >> u >> v;
		g.new_edge(u, v);
	}
	
	int q; cin >> q;
	int u, v;
	while (q--) {
		cin >> u >> v;
		string s; cin >> s;
		dir = s;
		if (!g.is_reachable(u, v))
    		cout << "impossible" << endl;
	}
 
    return 0;
}
