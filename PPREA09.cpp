#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

const int N = 1E5;
long long a[N + 5];

int main() {
	//freopen("input.txt", "r", stdin);;

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << a[0] * a[1] << " ";
		for (int i = 1; i < n - 1; i++)
			cout << a[i - 1] * a[i + 1] << " ";
		if (n > 2) cout << a[n - 2] * a[n - 1];
		cout << "\n";

	}


	return 0;

}