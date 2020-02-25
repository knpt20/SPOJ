#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int modpow(int a, int b, int p) {
	if (b == 0) return 1 % p;
	long long x = modpow(a, b / 2, p);
	if (b & 1) return ((x * x) % p * a) % p;
	return (x * x) % p;
}

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int x, y, p; cin >> x >> y >> p;
		cout << modpow(x, y, p) << "\n";

	}

	return 0;

}