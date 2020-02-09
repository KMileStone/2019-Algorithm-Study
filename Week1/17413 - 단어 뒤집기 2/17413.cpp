#include <iostream>
#include <stack>
using namespace std;

int main() {
	char c = '\0';
	stack<char> word;

	while (c != '\n') {
		while (1) {
			c = getchar();

			if (c != '<' && c != ' ' && c != '\n') {
				word.push(c);
			} else {
				break;
			}
		}

		while (word.size() > 0) {
			cout << word.top();
			word.pop();
		}

		cout << c;
		if (c == '<') {
			while (c != '>') {
				c = getchar();
				cout << c;
			}
		}
	}

	return 0;
}