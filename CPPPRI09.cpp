#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int sn = sqrt(n);
		for(int i=2; i<=sn; i++)
			if (n % i == 0) {
				int cnt = 0;
				while (n % i == 0) {
					++cnt;
					n /= i;
				}
				cout << i << " " << cnt << " ";
			}
		if (n > 1) cout << n << " " << 1;
		cout << "\n";
	}

	return 0;

}