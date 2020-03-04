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
		int cnt = 0, sn = sqrt(n);
		for(int i=1; i<=sn; i++)
			if (n % i == 0) {
				if (i % 2 == 0) cnt++;
				if (n / i % 2 == 0) cnt++;
			}
		if (sn * sn == n && sn % 2 == 0) cnt--;
		cout << cnt << "\n";

	}

	return 0;

}