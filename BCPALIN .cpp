

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
	for (int i = 0, j = s.length() - 1; i < j; i++, j--)
		if (s[i] != s[j])
			return false;
	return true;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	

	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (isPalindrome(s))
			cout << "YES\n";
		else cout << "NO\n";
	}
}
