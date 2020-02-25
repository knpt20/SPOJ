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
		long long L, R; cin >> L >> R;
		int cnt = 0, i = 0, j = v.size() - 1;
		while (i < v.size() && v[i] < L)
			i++;
		while (j >= 0 && v[j] > R)
			j--;
		if (j >= i) cout << j - i + 1 << "\n";
		else cout << "0\n";
	}

	return 0;

}