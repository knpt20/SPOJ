#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

string sub(string& a, string& b) {
	int br = 0;
	string c = "";
	for (int i = a.length() - 1; i >= 0; i--) {
		int s = a[i] - b[i] - br;
		if (s < 0) {
			s += 10;
			br = 1;
		}
		else br = 0;
		c = char(s + '0') + c;
	}

	return c;
}



int main() {
	//freopen("input.txt", "r", stdin);;

	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		while (a.length() < b.length()) a = '0' + a;
		while (b.length() < a.length()) b = '0' + b;

		if (a.compare(b) >= 0)
			cout << sub(a, b) << "\n";
		else cout << sub(b, a) << "\n";

	}


	return 0;

}