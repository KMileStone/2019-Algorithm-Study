#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int input = 0;
	stack<int> s;
	int num = 1;
	int repeat = 0;
	string str;
	while (n--) {
		cin >> input;
	
		if (input >= num) {
			repeat = input - num + 1;
			while (repeat--) {
				s.push(num);
				str += "+\n";
				num++;
			}
			s.pop();
			str += "-\n";
		} else {
			if (s.top() == input) {
				s.pop();
				str += "-\n";
			} else {
				cout << "NO";
				return 0;
			}
		}	
	}

	cout << str;

	return 0;
}