#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	deque<int> dq;
	string command;
	int num = 0;
	while (n--) {
		cin >> command;
		if (command == "push_front") {
			cin >> num;
			dq.push_front(num);
		} else if (command == "push_back") {
			cin >> num;
			dq.push_back(num);
		} else if (command == "pop_front") {
			if (dq.size() > 0) {
				cout << dq.front() << endl;
				dq.pop_front();
			} else {
				cout << -1 << endl;
			}
		} else if (command == "pop_back") {
			if (dq.size() > 0) {
				cout << dq.back() << endl;
				dq.pop_back();
			} else {
				cout << -1 << endl;
			}
		} else if (command == "size") {
			cout << dq.size() << endl;
		} else if (command == "empty") {
			cout << dq.empty() << endl;
		} else if (command == "front") {
			if (dq.size() > 0) {
				cout << dq.front() << endl;
			} else {
				cout << -1 << endl;
			}
		} else if (command == "back") {
			if (dq.size() > 0) {
				cout << dq.back() << endl;
			} else {
				cout << -1 << endl;
			}
		}
	}

	return 0;
}