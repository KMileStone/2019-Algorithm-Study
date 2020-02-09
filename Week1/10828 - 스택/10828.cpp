#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	stack<int> s;
	string command;
	int num = 0;
	while (n--) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			s.push(num);
		} else if (command == "pop") {
			if (s.size() > 0) {
				cout << s.top() << endl;
				s.pop();
			} else {
				cout << -1 << endl;
			}
		} else if (command == "size") {
			cout << s.size() << endl;
		} else if (command == "empty") {
			cout << s.empty() << endl;
		} else if (command == "top") {
			if (s.size() > 0) {
				cout << s.top() << endl;
			} else {
				cout << -1 << endl;
			}
		}
	}

	return 0;
}