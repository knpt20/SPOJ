#include <iostream>
#include <cmath>

using namespace std;

const int N = 100000;
bool f[N + 5];

void sieve() {
	f[0] = f[1] = 1;
	int sn = sqrt(N);
	for (int i = 2; i <= sn; i++)
		if (f[i] == 0)
			for (int j = i * i; j <= N; j += i)
				f[j] = 1;
}

int sum(int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

bool isSmithNumber(int n) {
	if (f[n] == 0) return false;
	int sn = sqrt(n), s = sum(n);
	for (int i = 2; i <= sn; i++)
		if (n % i == 0) {
			int si = sum(i);
			while (n % i == 0) {
				s -= si;
				n /= i;
			}
		}
	if (n > 1) s -= sum(n);
	return s == 0;
}


int main() {
	//freopen("input.txt", "r", stdin);
	sieve();

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		if (isSmithNumber(n)) cout << "YES\n";
		else cout << "NO\n";

	}

	return 0;

}
