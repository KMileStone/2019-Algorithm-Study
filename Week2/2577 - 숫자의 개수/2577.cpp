#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;

	int digit[10] = {0};
	string str = to_string(a * b * c);
	int len = str.length();
	for (int i = 0; i < len; i++) {
		digit[str[i] - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		cout << digit[i] << endl;
	}

	return 0;
}