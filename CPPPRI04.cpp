#include <iostream>
#include <cmath>

using namespace std;

const int N = 10000;

int f[N + 5];

void sieve() {
	for (int i = 2; i <= N; i += 2)
		f[i] = 2;

	for (int i = 1; i <= N; i += 2)
		f[i] = i;

	int sn = sqrt(N);
	for (int i = 3; i <= sn; i += 2)
		if (f[i] == i)
			for (int j = i * i; j <= N; j += i)
				if (f[j] == j)
					f[j] = i;	
}

int main() {
	//freopen("input.txt", "r", stdin);
	sieve();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++)
			cout << f[i] << " ";
		cout << "\n";
	}

}