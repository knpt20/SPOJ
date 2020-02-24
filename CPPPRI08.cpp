#include <iostream>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n, p; cin >> n >> p;
		int cnt = 0;
		for (int i = p; i <= n; i += p)
			if (i % p == 0) {
				for (int j = i; j % p == 0; j /= p)
					++cnt;
			}
		cout << cnt << "\n";

	}

	return 0;

}