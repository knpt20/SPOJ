#include <iostream>

using namespace std;

int x[10], m[10];
int n;

void backTrack(int i) {
	for (int j = 1; j <= n; j++)
		if (m[j] == 0) {
			m[j] = 1;
			x[i] = j;
			if (i == n) {
				for (int k = 1; k <= n; k++)
					cout << x[k];
				cout << "\n";
			}
			else backTrack(i + 1);
			m[j] = 0;
		}
}


int main() {
	cin >> n;
	backTrack(1);

	return 0;
}