#include <iostream>
using namespace std;

struct NodeType {
	char data;
	NodeType* prev;
	NodeType* next;
};

int main() {
	NodeType* editor;
	NodeType* cursor;
	editor = new NodeType;	// dummy node
	editor->data = '\0';
	editor->prev = NULL;
	editor->next = NULL;
	cursor = editor;

	char buffer = '\0';
	NodeType* node;
	while (1) {
		buffer = getchar();
		if (buffer == '\n') {
			break;
		}
		node = new NodeType;
		node->data = buffer;
		node->prev = cursor;
		node->next = NULL;
		cursor->next = node;
		cursor = node;
	}

	int m = 0;
	cin >> m;

	char command = '\0';
	while (m--) {
		cin >> command;
		switch (command) {
			case 'L':
				if (cursor->prev != NULL) {
					cursor = cursor->prev;
				}
				break;
			case 'D':
				if (cursor->next != NULL) {
					cursor = cursor->next;
				}
				break;
			case 'B':
				if (cursor->prev != NULL) {					// not first node (dummy)
					if (cursor->next != NULL) {				// not last node
						cursor->prev->next = cursor->next;
						cursor->next->prev = cursor->prev;
						node = cursor;
						cursor = cursor->prev;
						delete node;
					} else {								// last node
						cursor->prev->next = cursor->next;
						node = cursor;
						cursor = cursor->prev;
						delete node;
					}
				}
				break;
			case 'P':
				cin >> buffer;
				node = new NodeType;
				if (cursor->next != NULL) {					// not last node
					node->data = buffer;
					node->prev = cursor;
					node->next = cursor->next;
					cursor->next->prev = node;
					cursor->next = node;
					cursor = cursor->next;
				} else {									// last node
					node->data = buffer;
					node->prev = cursor;
					node->next = cursor->next;
					cursor->next = node;
					cursor = cursor->next;
				}
				break;
			default:
				break;
		}
	}

	node = editor->next;
	while (node != NULL) {
		cout << node->data;
		node = node->next;
	}

	return 0;
}