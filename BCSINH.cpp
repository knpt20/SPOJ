#include <iostream>

using namespace std;

const int N = 10;

int n;
int x[N];

void backTrack(int i) {
	for (int j = 0; j < 2; j++) {
		x[i] = j;
		if (i == n) {
			for (int k = 1; k <= n; k++)
				cout << x[k];
			cout << "\n";
		}
		else backTrack(i + 1);
	}
}

int main() {
	cin >> n;
	backTrack(1);
	return 0;
}