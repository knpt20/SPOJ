#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

string add(string a, string b) {
	while (a.length() < b.length()) a = '0' + a;
	while (b.length() < a.length()) b = '0' + b;

	int cr = 0;
	string c = "";
	for (int i = a.length() - 1; i >= 0; i--) {
		int s = a[i] + b[i] - 2 * '0' + cr;
		cr = s / 10;
		c = char((s%10) + '0') + c;
	}
	if (cr > 0) c = '1' + c;
	return c;
}

string mul(string a, string b) {
	string bk[10];
	bk[0] = "0";
	for (int i = 1; i < 10; i++) 
		bk[i] = add(bk[i - 1], b);

	string c = "0";
	for (int i = a.length() - 1, j = 0; i >= 0; i--, j++)
		c = add(c, bk[a[i] - '0'] + string(j, '0'));

	return c;
}


int main() {
	//freopen("input.txt", "r", stdin);;
	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		cout << mul(a, b) << "\n";
	}


	return 0;

}