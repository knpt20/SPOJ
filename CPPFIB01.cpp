#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

const int M = 1E9 + 7;
const int N = 1000;

int f[N + 5];

void init() {
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= N; i++)
		f[i] = (f[i - 1] + f[i - 2]) % M;
}

int main() {
	//freopen("input.txt", "r", stdin);
	
	init();

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << f[n] << "\n";		
	}

	return 0;

}