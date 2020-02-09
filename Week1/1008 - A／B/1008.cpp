#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	cin >> a >> b;

	cout << setprecision(15) << (double)a / b;
}