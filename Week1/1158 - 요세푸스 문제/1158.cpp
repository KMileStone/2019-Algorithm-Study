#include <iostream>
using namespace std;

struct NodeType {
	int num;
	NodeType* next;
};

int main() {
	int n = 0;
	int k = 0;
	cin >> n >> k;

	NodeType* circle = new NodeType;
	circle->num = 1;
	circle->next = circle;

	NodeType* node;
	NodeType* pre = circle;
	for (int i = 2; i <= n; i++) {
		node = new NodeType;
		node->num = i;
		node->next = circle;
		pre->next = node;
		pre = node;
	}

	NodeType* temp;
	node = circle;
	cout << "<";
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < k - 1; j++) {
			pre = node;
			node = node->next;
		}
		cout << node->num << ", ";
		temp = node;
		pre->next = node->next;
		node = node->next;
		delete temp;
	}
	cout << node->num << ">";
	delete node;

	return 0;
}