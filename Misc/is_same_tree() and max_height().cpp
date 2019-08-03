#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int val;
	Node * left;
	Node * right;
	Node (int v) : val(v) {};
};

// function that computes the height of the tree 
int height(Node * root) {
	if (root == NULL)
		return 0;
	return max(height(root->left), height(root->right)) + 1;
}

// predicate function that checks if two trees are the same 
bool is_same_tree(Node * root, Node * root2) {
	if (root == NULL && root2 == NULL)
		return true; 
	else if (root == NULL || root2 == NULL)
		return false; 
		
	if (root->val != root2->val)
		return false;
		
	return is_same_tree(root->left, root2->left) && is_same_tree(root->right, root2->right);
}

// utility function to build trees from string input
Node * build_tree() {
	vector <Node *> nodes;
	string s;
	nodes.push_back(NULL);
	while (cin >> s) {
		if (s == "!")
			break;
		if (s == "null") {
			nodes.push_back(NULL);
		} else {
			int val = stoi(s);
			Node * nn = new Node(val);
			nodes.push_back(nn);
		}
	}
	for (int i = 1; i <= nodes.size() / 2; i++) {
		if (nodes[i] != NULL) {
			nodes[i]->left = nodes[i * 2];
			nodes[i]->right = nodes[i * 2 + 1];
		}
	}
	
	return nodes[1];
		
}

// DFS pre-order traversal 
void DFS(Node * root) {
	if (root == NULL) 
		return;
	
	cout << root->val << " ";
	DFS(root->left);
	DFS(root->right);
}

int main() {
	Node * root = build_tree(); 
	cout << "height of the 1st tree is " << height(root) << endl;
	Node * root2 = build_tree();
	cout << "DFS traversal for the 1st tree is "; DFS(root); cout << endl;
	cout << "DFS traversal for the 2nd tree is "; DFS(root2); cout << endl;
	if (is_same_tree(root, root2))
		cout << "the 2 trees are identical!" << endl; 
	else 
		cout << "the 2 trees are different" << endl;
	return 0;
}