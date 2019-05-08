// first test case: 4 1 2 3 4
// second test case: 19 5 7 6 8 12 -1 -1 -1 9 -1 -1 -1 -1 -1 -1 -1 -1 10 15

#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Node;
Node * make_node(int v, Node * p);

int current_count = 0; 
int max_count = 0;
queue <Node *> Q; 

class Node {
	int value; 
	Node * parent; 
	Node * left; 
	Node * right;
	public:	
		Node(int, Node *);
		Node * get_left() {
			return this->left;
		}
		Node * get_right() {
			return this->right;
		}
		int get_value() {
			return this->value;
		}
		Node * get_parent() {
			return this->parent;
		}
		bool is_left_empty() {
			return this->left == NULL;
		}
		bool is_right_empty() {
			return this->right == NULL;
		}
		bool set_left(int l) {
			if (this->is_left_empty()) {
				this->left = make_node(l, this);
				return true;
			} 
			return false;
		}
		bool set_right(int r) {
			if (this->is_right_empty()) {
				this->right = make_node(r, this);
				return true;
			}
			return false;
		}
		void visit() {
			if (this->get_parent() != NULL && this->get_value() - this->get_parent()->get_value() == 1) {
				current_count++;
			} else if (this->get_value() != -1) {
				if (current_count > max_count)
					max_count = current_count;
				current_count = 0;
			}
			if (!this->is_left_empty()) {
				this->get_left()->visit();
				
			}
			if (!this->is_right_empty())
				this->get_right()->visit();
		}
};

Node::Node(int v, Node * p) {
	value = v;
	parent = p;
	left = NULL;
	right = NULL;
}

Node * build_tree(Node * root, list <int> & values) {
	if (!values.empty()) {
		root->set_left(values.front());
		Q.push(root->get_left());
		values.pop_front();
	}
	if (!values.empty()) {
		root->set_right(values.front());
		Q.push(root->get_right());
		values.pop_front();
	}
	if (!Q.empty()) { 
		Node * new_root = Q.front();
		Q.pop();
		build_tree(new_root, values);
	}
	return root;
}

Node * make_node(int v, Node * p) {
	Node * new_node = new Node(v, p);
	return new_node;
}

int main() {
	list <int> values;
	int n; cin >> n; 
	Node * root;
	while (n--) {
		int x; cin >> x; 
		values.push_back(x);
	}
	if (!values.empty()) {
		root = make_node(values.front(), NULL);
		values.pop_front();
		build_tree(root, values);
		root->visit(); 
		cout << max_count + 1 << endl;
	} else 
		cout << 0 << endl;
	return 0;
}