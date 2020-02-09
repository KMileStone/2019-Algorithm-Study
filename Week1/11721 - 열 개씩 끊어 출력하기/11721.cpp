#include <iostream>
using namespace std;

int main() {
	char c = '\0';

	while (c != '\n') {
		for (int i = 0; i < 10; i++) {
			c = getchar();
			if (c == '\n') {
				break;
			} else {
				cout << c;
			}
		}
		cout << endl;
	}

	return 0;
}