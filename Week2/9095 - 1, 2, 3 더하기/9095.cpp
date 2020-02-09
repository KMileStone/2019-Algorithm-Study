#include <iostream>
using namespace std;

int main() {
	int t = 0;
	cin >> t;

	int n = 0;
	int d[11];
	while (t--) {
		cin >> n;

		d[1] = 1;
		d[2] = 2;
		d[3] = 4;
		for (int i = 4; i <= n; i++) {
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];		
		}
	
		cout << d[n] << endl;	
	}

	return 0;
}