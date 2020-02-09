#include <iostream>
#include <string>
using namespace std;

int main() {
	int t = 0;
	cin >> t;

	int r = 0;
	string s;
	int len = 0;
	while (t--) {
		cin >> r >> s;

		len = s.length();
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < r; j++) {
				cout << s[i];
			}
		}
		cout << endl;
	}

	return 0;
}