#include <iostream>
#include <cmath>

using namespace std;



int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		long long sn = sqrt(n);
		for (int i = 2; i <= sn; i++)
			while (n % i == 0) {
				cout << i << " ";
				n /= i;
			}
		if (n > 1)
			cout << n;
		cout << "\n";
	}

}