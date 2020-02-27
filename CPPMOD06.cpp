#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


long long operator%(string a, long long b) {
	long long hold = 0;
	for (int i = 0; i < a.size(); i++)
		hold = (hold * 10 + a[i] - '0') % b;
	return hold;
}

long long mul(long long a, long long b, long long& M) {
	if (b == 0) return 0;
	long long x = mul(a, b / 2, M);
	if (b & 1) return ((x + x) % M + a) % M;
	return (x + x) % M;
}

long long modPow(long long a, long long b, long long& M) {
	if (b == 0) return 1;
	long long x = modPow(a, b / 2, M);
	if (b & 1) return mul(mul(x, x, M), a, M);
	return mul(x, x, M);

}


int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		string a; cin >> a;
		long long b, M; cin >> b >> M;
		cout << modPow(a % M, b, M) << "\n";
	}
	

	return 0;

}