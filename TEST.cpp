#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


int main() {
	//freopen("input.txt", "r", stdin);;

	int x;
	while (cin >> x)
		if (x != 42) cout << x << '\n';
		else break;

	return 0;

}