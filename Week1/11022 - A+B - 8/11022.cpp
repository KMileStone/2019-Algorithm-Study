#include <iostream>
using namespace std;

int main() {
	int t = 0;
	cin >> t;

	int a = 0;
	int b = 0;
	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
	}

	return 0;
}