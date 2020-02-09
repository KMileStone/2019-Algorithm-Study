#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int k = 1;
	while (k < n) {
		k *= 2;
	}
	cout << 2 * n - k;

	return 0;
}