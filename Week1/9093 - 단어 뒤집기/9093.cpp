#include <iostream>
using namespace std;

int main() {
	int t = 0;
	cin >> t;

	char c = '\0';
	char word[20];	// stack
	int top = -1;

	c = getchar();	// flush '\n' at first
	while (t--) {
		c = '\0';
		while (c != '\n') {
			// push
			while (1) {
				c = getchar();
				if (c != ' ' && c != '\n') {
					top++;
					word[top] = c;
				} else {
					break;
				}
			}

			// pop
			while (top >= 0) {
				cout << word[top];
				top--;
			}
			cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}