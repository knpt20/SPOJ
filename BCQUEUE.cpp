#include <iostream>
#include <queue>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);

	int t; cin >> t;
	queue<int> q;
	while (t--) {
		int v; cin >> v;
		switch (v) {
		case 1: 
			cout << q.size() << "\n";
			break;

		case 2:
			cout << (q.empty() ? "YES" : "NO") << "\n";
			break;

		case 3:
			int x; cin >> x;
			q.push(x);
			break;

		case 4:
			if (q.size() > 0)
				q.pop();
			break;
			
		case 5:
			if (q.size() > 0)
				cout << q.front();
			else cout << "-1";
			cout << "\n";
			break;

		case 6:
			if (q.size() > 0)
				cout << q.back();
			else cout << "-1";
			cout << "\n";
			break;
		}
	}
}