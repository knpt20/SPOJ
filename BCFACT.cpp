#include <iostream>

using namespace std;

const int N = 17;
long long f[N+1];

void init() {
	f[0] = 1;
	for (int i = 1; i <= N; i++)
		f[i] = i * f[i - 1];
}

int main() {
	//freopen("input.txt", "r", stdin);

	init();

	int n;
	while (cin >> n)
		if (n != 0)
			cout << f[n] << "\n";

	return 0;
}
