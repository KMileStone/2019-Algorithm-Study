#pragma warning(disable:4996)

#include <iostream>
using namespace std;

int main() {
	int t = 0;
	scanf("%d", &t);

	int a = 0;
	int b = 0;
	while (t--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}