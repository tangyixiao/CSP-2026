#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	long long ans = 0;
	char c;
	string s;
	cin >> n;
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a >> c;
		for (int j = 1 ; j <= a ; j++)
		{
			s += c;
		}
	}
	for (int i = 0 ; i < s.length() / 2 ; i++)
	{
		if (s[i] != s[s.length() - i - 1])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
