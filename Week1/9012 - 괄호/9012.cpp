#include <iostream>
using namespace std;

int main() {
	int t = 0;
	cin >> t;

	char c = '\0';
	int depth = 0;

	c = getchar();	// flush '\n' at first
	while (t--) {
		depth = 0;

		while (1) {
			c = getchar();
			if (c == '(') {
				depth++;
			} else if (c == ')') {
				depth--;
			} else {
				break;
			}

			if (depth < 0) {
				while (getchar() != '\n') {}	// flush until '\n'
				break;
			}
		}

		if (depth == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}