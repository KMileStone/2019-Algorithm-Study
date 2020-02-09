#include <iostream>
using namespace std;

long long memo[100];
long long fibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		if (memo[n] > 0) {
			return memo[n];
		}
		memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return memo[n];
	}
}

int main() {
	int n = 0;
	cin >> n;

	cout << fibonacci(n);

	return 0;
}