#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;
const int M = 1E9 + 7;

long long modPow(long long a, long long b) {
	if (b == 0) return 1;
	long long x = modPow(a, b / 2);
	if (b & 1) return ((x * x) % M * a) % M;
	return (x * x) % M;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		long long h = 1;
		int x = 0, g = 0;
		while (n--) {
			cin >> x;
			g = gcd(g, x);
			h = (h * x) % M;
		}

		cout << modPow(h, g) << "\n";

	}

	return 0;

}