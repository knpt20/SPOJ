#include <iostream>

using namespace std;

int gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	long long a, b;
	while (cin >> a >> b)
		if (a && b) {
			int g = gcd(a, b);
			cout << g << " " << a * b / g << "\n";
		}
	return 0;
}