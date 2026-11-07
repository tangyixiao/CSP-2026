#include <iostream>
#include <algorithm>
using namespace std;

int n, ans;
string s;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a;
		char c;
		cin >> a >> c;
		for (int j = 1; j <= a; j++)
			s += c;
	}
	int l = s.size();
	s = ' ' + s;
	for (int i = 1; i <= s.size() / 2; i++)
		ans += (s[i] != s[l + 1 - i]);
	cout << ans;
	return 0;
}
