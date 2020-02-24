#include <iostream>

using namespace std;

const int N = 10;

int n, k;
int x[N + 5]; 

void backTrack(int i) {
	for (int j = x[i - 1] + 1; j <= n - k + i; j++) {
		x[i] = j;
		if (i == k) {
			for (int t = 1; t <= k; t++)
				cout << x[t] << " ";
			cout << "\n";
		}
		else backTrack(i + 1);
	}
}


int main() {
	//freopen("input.txt", "r", stdin);

	cin >> n >> k;
	backTrack(1);
}