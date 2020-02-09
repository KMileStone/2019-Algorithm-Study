/*
#include <iostream>
using namespace std;

int main() {
	char editor[600001];
	int length = 0;
	char buffer = '\0';
	while (1) {
		buffer = getchar();
		if (buffer == '\n') {
			break;
		}
		editor[length] = buffer;
		length++;
	}
	int cursor = length;

	int m = 0;
	cin >> m;

	char command = '\0';
	while (m--) {
		cin >> command;
		switch (command) {
			case 'L':
				if (cursor > 0) {
					cursor--;
				}
				break;
			case 'D':
				if (cursor < length) {
					cursor++;
				}
				break;
			case 'B':
				if (cursor > 0) {
					for (int i = cursor; i < length; i++) {
						editor[i - 1] = editor[i];
					}
					cursor--;
					length--;
				}
				break;
			case 'P':
				cin >> buffer;
				if (length < 600000) {
					for (int i = length - 1; i >= cursor; i--) {
						editor[i + 1] = editor[i];
					}
					editor[cursor] = buffer;
					cursor++;
					length++;
				}
				break;
			default:
				break;
		}
	}

	for (int i = 0; i < length; i++) {
		cout << editor[i];
	}

	return 0;
}
*/