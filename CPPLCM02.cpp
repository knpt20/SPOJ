#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const int N = 42;

long long f[N + 5];

long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

void init() {
	f[1] = 1;
	for (int i = 2; i <= N; i++) {
		f[i] = lcm(f[i - 1], i);
	}
}


int main() {
	//freopen("input.txt", "r", stdin);
	init();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << f[n] << "\n";
	}

	return 0;

}