#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	int len = s.length();
	for (int i = 0; i < len; i++) {
		if ('A' <= s[i] && s[i] <= 'Z') {
			if (s[i] <= 'M') {
				s[i] += 13;
			} else {
				s[i] -= 13;
			}
		} else if ('a' <= s[i] && s[i] <= 'z') {
			if (s[i] <= 'm') {
				s[i] += 13;
			} else {
				s[i] -= 13;
			}
		}
	}

	cout << s;

	return 0;
}