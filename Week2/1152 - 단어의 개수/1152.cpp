#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);

	int count = 0;
	bool word = false;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] != ' ') {
			if (word == false) {
				count++;
			}
			word = true;
		} else {
			word = false;
		}
	}

	cout << count;

	return 0;
}