#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int a, b;
		cin >> a >> b;

		int originA = a;
		int originB = b;

		while (b != 0) {
			int r = a % b;
			a = b;
			b = r;
		}
		int gcd = a;
		int lcm = (originA * originB) / gcd;

		cout << lcm << " " << gcd << endl;
	}
	return 0;
	
}