#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}




int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		long long a, x, y;
		cin >> a >> x >> y;
		long long g = gcd(x, y);
		while (g--)
			cout << a;
		cout << "\n";
	}

	return 0;

}