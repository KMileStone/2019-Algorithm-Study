#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int k = 0;
	cin >> n >> k;

	int d[201];
	for (int i = 0; i <= n; i++) {
		d[i] = 1;
	}
	for (int i = 0; i < k-1; i++) {
		for (int j = 1; j <= n; j++) {
			d[j] += d[j - 1];
			d[j] %= 1000000000;
		}
	}

	cout << d[n];

	return 0;
}