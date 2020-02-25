#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const int N = 1000000;
int f[N+5];
vector<long long> v;

void sieve() {
	int sn = sqrt(N);
	for (int i = 2; i <= sn; i++)
		if (f[i] == 0)
			for (int j = i * i; j <= N; j += i)
				f[j] = 1;
		
	for (long long i = 2; i <= N; i++)
		if (f[i] == 0)
			v.push_back(i * i);

}



int main() {
	//freopen("input.txt", "r", stdin);

	sieve();
	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		int cnt = 0;
		for (long long& x : v)
			if (x <= n)
				++cnt;
		cout << cnt << "\n";
	}

	return 0;

}