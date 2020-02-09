#include <iostream>
using namespace std;

int d[1000000];

int main() {
	int n = 0;
	cin >> n;

	d[1] = 0;
	d[2] = 1;
	d[3] = 1;
	for (int i = 4; i <= n; i++) {
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0 && d[i / 2] + 1 < d[i]) {
			d[i] = d[i / 2] + 1;
		}
		if (i % 3 == 0 && d[i / 3] + 1 < d[i]) {
			d[i] = d[i / 3] + 1;
		}
	}

	cout << d[n];

	return 0;
}