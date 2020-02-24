#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int cal(int n, int k) {
	int sn = sqrt(n);
	for(int i=2; i<=sn; i++)
		while (n % i == 0) {
			--k;
			if (k == 0) return i;
			n /= i;
		}
	if (n > 1 && k == 1) return n;
	return -1;
}



int main() {
	//freopen("input.txt", "r", stdin);


	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		cout << cal(n, k) << "\n";
	}

	return 0;

}