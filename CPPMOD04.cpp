#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

long long sum(long long n) {
	return n * (n + 1) / 2;
}

int cal(int n, long long k) {
	if (n < k) return sum(n) == k;
	if (n == k) return sum(n) - 1 == k;
	return (n / k) * sum(k - 1) + sum(n % k) == k;
}

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;

	while (t--) {
		int n;
		long long k;
		cin >> n >> k;
		cout << cal(n, k) << "\n";
	}

	return 0;

}