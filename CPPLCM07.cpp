#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

long long cal(int x, int y, int z, int n) {
	long long t = lcm(lcm(x, y), z);
	if (t >= pow(10, n))
		return -1;
	long long r = pow(10, n - 1) - 1;
	long long d = r % t;
	return r + (t - d);	
}


int main() {
	//freopen("input.txt", "r", stdin);
	

	int t; cin >> t;
	while (t--) {
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		cout << cal(x, y, z, n) << "\n";
	}

	return 0;

}