#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	string b;
	cin >> a >> b;

	string new_a;
	new_a += a[2];
	new_a += a[1];
	new_a += a[0];
	string new_b;
	new_b += b[2];
	new_b += b[1];
	new_b += b[0];

	if (new_a > new_b) {
		cout << new_a;
	} else {
		cout << new_b;
	}

	return 0;
}