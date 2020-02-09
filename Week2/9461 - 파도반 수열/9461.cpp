#include <iostream>
using namespace std;

int main() {
	int t = 0;
	cin >> t;

	int n = 0;
	long long d[101];
	while (t--) {
		cin >> n;

		d[1] = 1;
		d[2] = 1;
		d[3] = 1;
		for (int i = 4; i <= n; i++) {
			d[i] = d[i - 2] + d[i - 3];
		}

		cout << d[n] << endl;
	}

	return 0;
}