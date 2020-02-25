#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

const int N = 20;

int n;
int x[N + 5], m[N + 5];

void backTrack(int i) {
	for(int j=1; j<=n; j++)
		if (m[j] == 0) {
			m[j] = 1;
			x[i] = j;
			if (i == n) {
				for (int k = 1; k <= n; k++)
					cout << x[k];
				cout << " ";
			}
			else backTrack(i + 1);
			m[j] = 0;
		}
}

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;

	while (t--) {
		cin >> n;
		backTrack(1);
		cout << "\n";
	}

	return 0;

}