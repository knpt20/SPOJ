#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		int cnt = 0;
		for (int i = m; i <= n; i++)
			if (i % a == 0 || i % b == 0)
				cnt++;
		cout << cnt << "\n";
	}

	return 0;

}