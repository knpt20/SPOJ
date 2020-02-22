
#include <iostream>

using namespace std;
const int N = 1000;

int main()
{
	//freopen("input.txt", "r", stdin);

	int n;
	cin >> n;
	int a[N + 5];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}

	for (int i = 0; i < n; i++)
		cout << a[i] << "\n";

	return 0;
}
