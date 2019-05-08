#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
	public: 
		char content;
		vector <Node *> adj_list;
		int index;
		int i, j;
		Node (int ind, char c, int a, int b) {
			content = c;
			adj_list = * new vector <Node *>;
			index = ind;
			i = a;
			j = b;
		}
};

typedef vector < vector <Node *> > vv;

class Graph {
	public:
		int h;
		int w;
		Node * s;
		vector <int> distance;
		vv adj_list; 
		Graph (int width, int height, Node * start, vv list) {
			h = height;
			w = width; 
			s = start;
			adj_list = list;
			distance = * new vector <int> (h * w, -1);
		}
};

queue <Node *> BFS_fire(Graph * maze) {
	int w = maze->w;
	int h = maze->h;
	queue <Node *> components;
	vector <bool> visited(w * h, false);
//	visited[start] = true;
	int count = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (!visited[count]) {
				components.push(maze->adj_list[i][j]);
				queue <Node *> q;
				q.push(maze->adj_list[i][j]);
				visited[count] = true;
				while (!q.empty()) {
					Node * n = q.front(); q.pop();
					if (!n->adj_list.empty()) {
						for (auto a: n->adj_list) {
							q.push(a);
							visited[a->index] = true;
						}
					}
				}
				count++;
			}
		}
	}
	return components;
}

void BFS(Graph * maze, Node * queue <Node *> components) {
	vector <bool> visited(w*h, false);
	queue <Node *> q;
	q.push(maze->s);
	visited[maze->s->index] = true;
	while (!q.empty()) {
		n = q.front(); q.pop();
		int i = n->i, j = n->j;
		vector <Node *> list = maze->adj_list[i][j]->adj_list;
		if (!list.empty()) {
			for (auto a: list) {
				q.push(a);
				visited[a->index] = true;
			}
		}
	}
	
}

Graph * build_graph() {
	int w, h; cin >> w >> h; 
	vv maze (w*h);
	Node * start;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			char c; cin >> c;
			Node * n = new Node(i*w+j+1, c, i, j);
			if (c == '@')
				start = n;
			maze[i].push_back(n);
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (maze[i][j]->content != '#') {
				if (i != 0) {
					if (maze[i-1][j]->content == '.' || maze[i-1][j]->content == '@') {
						maze[i][j]->adj_list.push_back(maze[i-1][j]);
						maze[i-1][j]->adj_list.push_back(maze[i][j]);
					} else if (maze[i-1][j]->content == '*')
						maze[i-1][j]->adj_list.push_back(maze[i][j]);
				}
				if (j != 0) { 
					if (maze[i][j-1]->content == '.' || maze[i][j-1]->content == '@') {
						maze[i][j]->adj_list.push_back(maze[i][j-1]);
						maze[i][j-1]->adj_list.push_back(maze[i][j]);
					} else if (maze[i][j-1]->content == '*')
						maze[i][j-1]->adj_list.push_back(maze[i][j]);
				}
			}
		}
	}

	return new Graph(w, h, start, maze);
}

int main() {
	int T; cin >> T; 
	while (T--) {
		int count = 0;
		Graph * maze = build_graph();
		queue <Node *> components = BFS_fire(maze);
		BFS(maze, maze->s, components);
	}
	
	// do a bfs that has the fire and the person moving 
	return 0;
}

// draft of code for when you actually know how to solve problems like this one
/* char person = start;
// add pair <int, int> to Node class to know when it's an exit
for (t = 0; t < w * h; t++)
	BFS(maze, start); // that's to find the components for fire 
BFS() {
	visited <bool> (w * h, false);
	queue <Node *> q; 
	Node * person = start;
	Node * fire; 
	start->content = '.';
	q.push(start);
	vusuted[start->index] = true;
	while (!q.empty() && !is_exit(person)) {
		person = q.top(); q.pop();
		if (!visited[person->index]) {
			for (auto a: person->adj_list) {
				q.push(a);
				visited[a->index] = true;
			}
			count = flames.size();
			while (count--) {
				f = flames.top(); flames.pop();
				for (auto a: f) {
					if (a->content == '.') {
						a->content = '*';
						flames.push(a);
					}
				}
			}
		}
	}
}
*/