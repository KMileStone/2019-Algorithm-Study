#include <iostream>
using namespace std;

int main() {
	int depth = 0;
	int sum = 0;

	char c = '\0';
	char pre = '\0';
	while (1) {
		c = getchar();

		if (pre == c) {							// if "((" or "))", +1
			sum++;
		} else if (pre == ')' && c == '(') {	// if ")(", +depth
			sum += depth;
		}

		if (c == '(') {
			depth++;
		} else if (c == ')') {
			depth--;
		} else {
			break;
		}
		pre = c;
	}

	cout << sum;

	return 0;
}