#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int alphabet[26] = {0};
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			alphabet[str[i] - 'A']++;
		} else if ('a' <= str[i] && str[i] <= 'z') {
			alphabet[str[i] - 'a']++;
		}
	}

	int max = 0;
	bool multiple = false;
	for (int i = 1; i < 26; i++) {
		if (alphabet[max] < alphabet[i]) {
			max = i;
			multiple = false;
		} else if (alphabet[max] == alphabet[i]) {
			multiple = true;
		}
	}

	if (multiple == true) {
		cout << '?';
	} else {
		cout << char('A' + max);
	}

	return 0;
}