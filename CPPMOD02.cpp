#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int cal(int a, int m) {
	for (int i = 1; i < m; i++)
		if ((a*i) % m == 1)
			return i;
	return -1;
}

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;

	while (t--) {
		int a, m; cin >> a >> m;
		cout << cal(a, m) << "\n";
	}

	return 0;

}