#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int n, k;
int x[25];

void backTrack(int i) {
	for (int j = x[i - 1] + 1; j <= n - k + i; j++) {
		x[i] = j;
		if (i == k) {
			for (int t = 1; t <= k; t++)
				cout << x[t];
			cout << " ";
		}
		else backTrack(i + 1);
	}
}


int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		backTrack(1);
		cout << "\n";
	}
	

	return 0;

}