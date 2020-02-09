#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int fibonacci[100];
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	for (int i = 2; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	cout << fibonacci[n];

	return 0;
}