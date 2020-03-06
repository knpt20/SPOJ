#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main() {
	//freopen("input.txt", "r", stdin);;

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int sn = sqrt(n);
		long long s = 0;
		for (int i = 1; i < sn; i++)
			if (n % i == 0)
				s += i + n / i;

		if (n % sn == 0)
			if (sn * sn < n) s += sn + n / sn;
			else s += sn;

		cout << (n == 1 ? 0 : s - n) << "\n";

	}

	return 0;

}