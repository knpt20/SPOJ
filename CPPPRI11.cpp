#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<long long> v = { 6, 28, 496, 8128, 33550336, 8589869056, 137438691328 };

bool isPerfectNumber(long long n) {
	for (long long& x : v)
		if (x == n)
			return true;
	return false;
}

int main() {
	//freopen("input.txt", "r", stdin);


	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		if (isPerfectNumber(n)) cout << "1\n";
		else cout << "0\n";
	}

	return 0;

}