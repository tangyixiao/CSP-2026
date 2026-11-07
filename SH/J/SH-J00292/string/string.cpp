#include <bits/stdc++.h>
using namespace std;

struct str
{
	int a;
	char c;
}s[200010];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> s[i].a >> s[i].c;
	int l = 1, r = n;
	int ln = s[l].a, rn = s[r].a;
	long long ans = 0;
	while (l < r)
	{
		if(s[l].c != s[r].c)
			ans += (ln>rn?rn:ln);
		if(ln > rn)
		{
			ln -= rn;
			r--;
			rn = s[r].a;
		}
		else
		{
			rn -= ln;
			l++;
			ln = s[l].a;
		}
	}
	cout << ans << endl;
	return 0;
}
