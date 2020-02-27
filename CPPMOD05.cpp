#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

long long operator%(string& s, long long n) {
	long long hold = 0;
	for (int i = 0; i < s.size(); i++)
		hold = (hold * 10 + s[i] - '0') % n;
	return hold;
}


int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		string s;
		long long n;
		cin >> s >> n;
		cout << s % n << "\n";
	}
	

	return 0;

}