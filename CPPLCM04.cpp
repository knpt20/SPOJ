#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

long long bigMod(string a, long long b) {
	int hold = 0;
	for (int i = 0; i < a.size(); i++)
		hold = (hold * 10 + a[i] - '0') % b;
	return hold;
}


int main() {
	//freopen("input.txt", "r", stdin);


	int t; cin >> t;
	while (t--) {
		int a;
		string b;
		cin >> a >> b;
		cout << gcd(bigMod(b, a), a) << "\n";
		
	}

	return 0;

}