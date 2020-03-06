#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main() {
	//freopen("input.txt", "r", stdin);;
	
	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		cout << n * (n + 1) / 2 << " ";
		cout << n * (n + 1) << " ";
		cout << n * n << " ";
		cout << n * (n + 1) * (2 * n + 1) / 6 << " ";
		cout << n * n * (n + 1) * (n + 1) / 4 << "\n";


	}

	return 0;

}