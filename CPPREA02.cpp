#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long x; 
		int z = 0;
		while (n--) {
			cin >> x;
			if (x != 0)	cout << x << " ";
			else z++;
		}
		while (z--)
			cout << 0 << " ";
		cout << "\n";

	}
	

	return 0;

}