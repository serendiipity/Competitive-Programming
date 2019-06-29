#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int value; 
	Node * left; 
	Node * right; 
	Node(int v) : value(v), left(NULL), right(NULL) {}
};

Node * build_tree(vector <int> values) {
	int size = values.size();
	vector <Node*> nodes;
	nodes.push_back(NULL);
	for (int i = 0; i < size; i++) {
		Node * n = new Node(values[i]);
		nodes.push_back(n);
	}
	for (int i = 1; i <= size / 2; i++) {
		nodes[i]->left = nodes[i * 2]; 
		nodes[i]->right = nodes[i * 2 + 1];
	}
	
	return nodes[1];
}

void BFS(Node * root) {
	queue <Node *> q; 
	q.push(root); 
	while (!q.empty()) {
		Node * node = q.front(); q.pop();
		if (node != NULL) {
			cout << node->value << " ";
			q.push(node->left); 
			q.push(node->right);
		}
	}
	cout << endl;
}

Node * invert_tree(Node * root) {
	if (root == NULL || (root->left == NULL && root->left == NULL))
		return root; 
	invert_tree(root->left);
	invert_tree(root->right);
	Node * temp = root->left; 
	root->left = root->right; 
	root->right = temp;
	return root;
}

int main() {
	Node * root; 
	int v; 
	vector <int> values; 
	while (cin >> v)
		values.push_back(v);
	
	root = build_tree(values);
	BFS(root);
	invert_tree(root);
	BFS(root);
	
	return 0;
}


/* input example: 4 2 7 1 3 6 9
intended output: 4 7 2 9 6 3 1 
both are in level order */
