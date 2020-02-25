#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const int N = 1000000;

int f[N + 5];

void sieve() {
	for (int i = 1; i <= N; i++)
		f[i] = i;
	int sn = sqrt(N);
	for (int i = 2; i <= sn; i++)
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
		for (int i = 1; i <= n; i++) {
			cout << f[i] << " ";
		}
		cout << "\n";

	}

	return 0;
}