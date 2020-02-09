#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int sum = 0;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		if ('A' <= str[i] && str[i] <= 'C') {
			sum += 3;
		} else if ('D' <= str[i] && str[i] <= 'F') {
			sum += 4;
		} else if ('G' <= str[i] && str[i] <= 'I') {
			sum += 5;
		} else if ('J' <= str[i] && str[i] <= 'L') {
			sum += 6;
		} else if ('M' <= str[i] && str[i] <= 'O') {
			sum += 7;
		} else if ('P' <= str[i] && str[i] <= 'S') {
			sum += 8;
		} else if ('T' <= str[i] && str[i] <= 'V') {
			sum += 9;
		} else if ('W' <= str[i] && str[i] <= 'Z') {
			sum += 10;
		}
	}

	cout << sum;

	return 0;
}