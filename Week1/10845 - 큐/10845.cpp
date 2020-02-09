#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	queue<int> q;
	string command;
	int num = 0;
	while (n--) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			q.push(num);
		} else if (command == "pop") {
			if (q.size() > 0) {
				cout << q.front() << endl;
				q.pop();
			} else {
				cout << -1 << endl;
			}
		} else if (command == "size") {
			cout << q.size() << endl;
		} else if (command == "empty") {
			cout << q.empty() << endl;
		} else if (command == "front") {
			if (q.size() > 0) {
				cout << q.front() << endl;
			} else {
				cout << -1 << endl;
			}
		} else if (command == "back") {
			if (q.size() > 0) {
				cout << q.back() << endl;
			} else {
				cout << -1 << endl;
			}
		}
	}

	return 0;
}