#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

const int N = 93;

long long f[N];

void init() {
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < N; i++) 
		f[i] = f[i - 1] + f[i - 2];
}

bool isFib(long long& n) {
	for (long long& x : f)
		if (x == n)
			return true;
	return false;
}


int main() {
	//freopen("input.txt", "r", stdin);

	init();
	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		if (isFib(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	

	return 0;

}