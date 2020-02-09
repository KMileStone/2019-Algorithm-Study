#include <iostream>
using namespace std;

struct NodeType {
	string data;
	NodeType* next;
};

int main() {
	string s;
	cin >> s;

	NodeType* suffix;		// sorted linked list
	int length = 0;

	suffix = new NodeType;
	suffix->data = s;
	suffix->next = NULL;
	length++;

	NodeType* cur;
	NodeType* pre;
	NodeType* node;
	int strlen = s.length();
	for (int i = 1; i < strlen; i++) {
		// insert s.substr(i)
		cur = suffix;
		pre = NULL;

		node = new NodeType;
		node->data = s.substr(i);
		node->next = NULL;

		while (1) {
			if (cur->data > node->data) {
				node->next = cur;

				if (suffix == cur) {
					suffix = node;
				} else {
					pre->next = node;
				}
				break;
			} else if (cur->next == NULL) {
				cur->next = node;
				break;
			}
			pre = cur;
			cur = cur->next;
		}
		length++;
	}

	cur = suffix;
	for (int i = 0; i < length; i++) {
		cout << cur->data << endl;
		cur = cur->next;
	}

	return 0;
}