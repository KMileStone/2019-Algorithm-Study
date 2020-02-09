#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int len = 0;
	int lower = 0;
	int upper = 0;
	int number = 0;
	int space = 0;
	while (getline(cin, str)) {
		lower = 0;
		upper = 0;
		number = 0;
		space = 0;

		len = str.length();
		for (int i = 0; i < len; i++) {
			if ('A' <= str[i] && str[i] <= 'Z') {
				upper++;
			} else if ('a' <= str[i] && str[i] <= 'z') {
				lower++;
			} else if ('0' <= str[i] && str[i] <= '9') {
				number++;
			} else if (str[i] == ' ') {
				space++;
			}
		}

		cout << lower << ' ' << upper << ' ' << number << ' ' << space << endl;
	}

	return 0;
}