#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

string add(string& a, string& b){
	int cr = 0;
	string c = "";
	for (int i = a.length() - 1; i >= 0; i--) {
		int s = a[i] + b[i] - 2 * '0' + cr;
		cr = s / 10;
		c = char(s % 10 + '0') + c;
	}
	if (cr > 0) c = '1' + c;
	return c;
}


int main() {
	//freopen("input.txt", "r", stdin);;

	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		while (a.length() < b.length()) a = '0' + a;
		while (b.length() < a.length()) b = '0' + b;
		cout << add(a, b) << "\n";


	}


	return 0;

}