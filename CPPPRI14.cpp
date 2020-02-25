#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const int N = 1000000;
bool f[N + 5];
vector<int> v;

void sieve() {
	f[0] = f[1] = 1;
	int sn = sqrt(N);
	for (int i = 2; i <= sn; i++)
		if (f[i] == 0) {
			v.push_back(i * i);
			for (int j = i * i; j <= N; j += i)
				f[j] = 1;
		}


}



int main() {
	//freopen("input.txt", "r", stdin);

	sieve();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int& x : v)
			if (x <= n)
				cout << x << " ";
		cout << "\n";
	}

	return 0;

}