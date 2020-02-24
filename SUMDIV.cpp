#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);

	int t; 
	cin >> t;
	while (t--) {
		long long n; cin >> n;
		long long sn = sqrt(n), s = 0;

		for (int i = 1; i <= sn; i++)
			if (n % i == 0)
				s += i + n / i;
		if (sn * sn == n) 
			s -= sn;
		
		cout << s << "\n";
	}
}