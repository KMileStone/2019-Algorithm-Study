#include <iostream>
using namespace std;

struct ItemType {
	int num;
	int priority;
};

int main() {
	int t = 0;
	cin >> t;

	int n = 0;
	int m = 0;
	int input = 0;
	ItemType printer[101];	// circular que
	int front = 100;
	int rear = 100;
	int priority[100];		// heap
	int length = 0;

	int cur = 0;
	int parent = 0;
	int left = 0;
	int right = 0;
	int temp = 0;

	int repeat = 0;
	int count = 1;

	while (t--) {
		cin >> n >> m;
		front = 100;
		rear = 100;
		length = 0;
		count = 1;

		for (int i = 0; i < n; i++) {
			cin >> input;

			// enque to circular que
			rear = (rear + 1) % 101;
			printer[rear].num = i;
			printer[rear].priority = input;

			// enque to heap
			priority[length] = input;
			cur = length;
			length++;

			while (cur > 0) {
				parent = (cur - 1) / 2;
				if (priority[parent] < priority[cur]) {
					temp = priority[cur];
					priority[cur] = priority[parent];
					priority[parent] = temp;
				}
				cur = parent;
			}
		}

		repeat = (n * (n + 1)) / 2;
		for (int i = 0; i < repeat; i++) {
			front = (front + 1) % 101;
			if (printer[front].priority == priority[0]) {
				if (printer[front].num == m) {
					cout << count << endl;
					break;
				} else {
					count++;

					priority[0] = priority[length - 1];
					cur = 0;
					length--;

					left = cur * 2 + 1;
					right = cur * 2 + 2;
					while (right < length) {
						if (priority[left] > priority[right]) {
							if (priority[left] > priority[cur]) {
								temp = priority[cur];
								priority[cur] = priority[left];
								priority[left] = temp;

								cur = left;
								left = cur * 2 + 1;
								right = cur * 2 + 2;
							} else {
								break;
							}
						} else {
							if (priority[right] > priority[cur]) {
								temp = priority[cur];
								priority[cur] = priority[right];
								priority[right] = temp;

								cur = right;
								left = cur * 2 + 1;
								right = cur * 2 + 2;
							} else {
								break;
							}
						}
					}
					if (left < length && priority[left] > priority[cur]) {
						temp = priority[cur];
						priority[cur] = priority[left];
						priority[left] = temp;
					}
				}
			} else {
				rear = (rear + 1) % 101;
				printer[rear].num = printer[front].num;
				printer[rear].priority = printer[front].priority;
			}
		}
	}

	return 0;
}