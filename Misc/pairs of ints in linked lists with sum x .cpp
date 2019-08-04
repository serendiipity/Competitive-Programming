#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node { 
	int val; 
	Node * next = NULL;
	Node (int v) : val(v) {};
};

Node * build_list() {
	int n; cin >> n;
	int x; cin >> x;
	n--;
	Node * head = new Node(x); 
	Node * prev = head;
	while (n--) {
		cin >> x;
		Node * node = new Node(x);
		prev->next = node;
		prev = node;
	}
	return head;
}

int count_pairs(Node * h1, Node * h2, int sum) {
	int count = 0;
	Node * it1 = h1; 
	Node * it2 = h2;
	while (it1 != NULL) {
		it2 = h2;
		while (it2 != NULL) {
			if (it1->val + it2->val == sum)
				count++;
			it2 = it2->next;	
		}
		it1 = it1->next;
	}
	return count;
}

int main() {
	int sum; cin >> sum;
	Node * head1 = build_list();
	Node * head2 = build_list();
	cout << count_pairs(head1, head2, sum) << endl;

	return 0;
}