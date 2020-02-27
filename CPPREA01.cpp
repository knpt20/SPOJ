#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

const int N = 1E7;
bool a[N+5];

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long x; 
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x < n && x != -1)
				a[x] = true;
		}

		for (int i = 0; i < n; i++) {
			if (a[i]) cout << i << " ";
			else cout << -1 << " ";
			a[i] = false;
		}
		cout << "\n";

	}
	

	return 0;

}