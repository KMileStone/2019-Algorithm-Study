#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int fibonacci[1001];
	fibonacci[1] = 1;
	fibonacci[2] = 2;
	for (int i = 3; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		fibonacci[i] %= 10007;
	}

	cout << fibonacci[n];

	return 0;
}