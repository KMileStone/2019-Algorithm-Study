#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int croatian = 0;
	char prepre = '\0';
	char pre = '\0';
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if (str[i] == '=' && (pre == 'c' || pre == 's' || pre == 'z')) {
			croatian++;
			if (prepre == 'd' && pre == 'z') {
				croatian++;
			}
		} else if (str[i] == '-' && (pre == 'c' || pre == 'd')) {
			croatian++;
		} else if (str[i] == 'j' && (pre == 'l' || pre == 'n')) {
			croatian++;
		}

		prepre = pre;
		pre = str[i];
	}

	cout << len - croatian;

	return 0;
}