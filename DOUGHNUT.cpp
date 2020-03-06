#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main() {
	//freopen("input.txt", "r", stdin);;

	int t; cin >> t;
	while (t--) {
		int c, k, w; cin >> c >> k >> w;
		if (k >= c * w) cout << "yes\n";
		else cout << "no\n";

	}

	return 0;

}