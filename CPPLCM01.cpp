#include <iostream>

using namespace std;

int gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}


int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		long long a, b;
		cin >> a >> b;
		long long x = gcd(a, b);
		cout << a * b / x << " " << x << "\n";
	}

}