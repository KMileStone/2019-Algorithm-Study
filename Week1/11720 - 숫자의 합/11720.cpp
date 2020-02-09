#pragma warning(disable:4996)

#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int input = 0;
	int sum = 0;
	while (n--) {
		scanf("%1d", &input);
		sum += input;
	}
	cout << sum;

	return 0;
}