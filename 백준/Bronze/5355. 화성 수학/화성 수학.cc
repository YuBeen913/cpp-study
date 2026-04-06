#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while(T--){
		double num;
		cin >> num;

		while (true) {
			char op;

			if (!(cin >> op))
				break;
			if (op == '@')
				num *= 3;
			else if (op == '%')
				num += 5;
			else if (op == '#')
				num -= 7;

			if (cin.peek() == '\n') {
				break;
			}
		}

		cout << fixed;
		cout.precision(2);
		cout << num << '\n';
	}
	return 0;
}