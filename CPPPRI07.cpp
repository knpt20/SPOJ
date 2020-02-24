#include <iostream>
#include <cmath>

using namespace std;

const int N = 10000;

bool check(int n) {
	int cnt = 0;
	int sn = sqrt(n);
	for (int i = 2; i <= sn; i++)
		if (n % i == 0) {
			++cnt;
			n /= i;
			if (n % i == 0)
				return false;
		}
	if (n > 1) ++cnt;
	return cnt == 3;
}


int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		if (check(n)) cout << "1\n";
		else cout << "0\n";

	}

}