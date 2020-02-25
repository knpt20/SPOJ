#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

const int M = 1E9 + 7;
const int N = 1000;

bool f[N + 5];

void init() {
	f[0] = f[1] = true;
	for (int f0 = 0, f1 = 1, f2 = f0 + f1; f2 <= N; f0=f1, f1=f2, f2 = f0 + f1) 
		f[f2] = true;
	
}

int main() {
	//freopen("input.txt", "r", stdin);
	
	init();

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int x;
		while (n--) {
			cin >> x;
			if (f[x]) cout << x << " ";
		}
		cout << "\n";
	}

	return 0;

}