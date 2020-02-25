#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1000;

int n;
int a[N + 5];

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;

	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0, j = n - 1; i < j; i++, j--)
			cout << a[j] << " " << a[i] << " ";
		if (n & 1) cout << a[n / 2];
		cout << "\n";

	}

	return 0;

}