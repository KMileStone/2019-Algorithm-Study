#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n = 0;
	int m = 0;
	cin >> n >> m;

	deque<int> dq;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}

	int input = 0;
	int idx = -1;
	int num = 0;
	int count = 0;;
	while (m--) {
		cin >> input;
		for (int i = 0; i < dq.size(); i++) {
			if (dq.at(i) == input) {
				idx = i;
				break;
			}
		}

		if (idx <= dq.size() / 2) {
			for (int i = 0; i <= idx; i++) {
				num = dq.front();
				dq.pop_front();
				if (num == input) {
					break;
				} else {
					dq.push_back(num);
					count++;
				}
			}
		} else {
			for (int i = dq.size(); i > idx; i--) {
				num = dq.back();
				dq.pop_back();
				count++;
				if (num == input) {
					break;
				} else {
					dq.push_front(num);
				}
			}
		}
	}

	cout << count;

	return 0;
}