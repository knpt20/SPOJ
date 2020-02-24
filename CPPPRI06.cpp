#include <iostream>
#include <cmath>

using namespace std;

const int N = 10000;

int f[N + 5];

void sieve() {
	f[0] = f[1] = 1;
	int sn = sqrt(N);
	for (int i = 2; i <= sn; i++)
		if (f[i] == 0)
			for (int j = i * i; j <= N; j += i)
				f[j] = 1;
}

int main() {
	//freopen("input.txt", "r", stdin);
	sieve();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for(int i=2; i<=n/2; i++)
			if (f[i] == 0 && f[n - i] == 0) {
				cout << i << " " << n - i << "\n";
				break;
			}
	}

}