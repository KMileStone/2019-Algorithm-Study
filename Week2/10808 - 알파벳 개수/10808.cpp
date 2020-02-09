#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int alphabet[25] = {0};
	int len = s.length();
	for (int i = 0; i < len; i++) {
		alphabet[int(s[i]) - 97]++;
	}

	for (int i = 0; i < 25; i++) {
		cout << alphabet[i] << ' ';
	}
	cout << alphabet[25];
	
	return 0;
}