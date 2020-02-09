#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int d[100001];
	for (int i = 1; i <= n; i++) {
		d[i] = i;
		for (int j = 2; j * j <= i; j++) {
			if (j * j == i) {
				d[i] = 1;
			} else if (1 + d[i - j * j] < d[i]) {
				d[i] = 1 + d[i - j * j];
			}
		}
	}

	cout << d[n];

	return 0;
}