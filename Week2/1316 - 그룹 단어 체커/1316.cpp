#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	string str;
	int len = 0;
	bool alphabet[26];
	char pre = '\0';
	bool check = true;
	int sum = 0;
	while (n--) {
		cin >> str;

		for (int i = 0; i < 26; i++) {
			alphabet[i] = false;
		}
		pre = '\0';
		check = true;

		len = str.length();
		for (int i = 0; i < len; i++) {
			if (alphabet[str[i] - 'a'] == true && pre != str[i]) {
				check = false;
				break;
			}
			alphabet[str[i] - 'a'] = true;
			pre = str[i];
		}
	
		if (check) {
			sum++;
		}	
	}

	cout << sum;

	return 0;
}