#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}

	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (alphabet[s[i] - 'a'] == -1) {
			alphabet[s[i] - 'a'] = i;
		}
	}

	for (int i = 0; i < 25; i++) {
		cout << alphabet[i] << ' ';
	}
	cout << alphabet[25];

	return 0;
}