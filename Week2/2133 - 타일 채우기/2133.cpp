#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	if (n % 2 == 1) {
		cout << 0;
		return 0;
	}

	int d[50];
	d[2] = 3;
	d[4] = 11;
	for (int i = 6; i <= n; i += 2) {
		d[i] = 4 * d[i - 2] - d[i - 4];
	}

	cout << d[n];

	return 0;
}