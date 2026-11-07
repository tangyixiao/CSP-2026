#include <bits/stdc++.h>
#define int long long

using namespace std;
const int N = 2e5 + 20;

bool f, q;
string s;
int n;
int a[N];
char c[N];
int ans;

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);	
	s = " ";
	cin >> n;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i] >> c[i];
		if (i > 1)
		{
			if (c[i - 1] != c[i]) f = 1;
			if (a[i - 1] != a[i]) q = 1;
		}
	}
	if (!f)
	{
		cout << "0";
	}
	else if (!q)
	{
		int aa = a[1];
		for (int i = 1; i <= n; i ++)
		{
			s += c[i];
		}
		int len = s.size(); 
		for (int i = 1; i <= (len - 1) / 2; i ++)
		{
			if (s[i] != s[len - i])
			{
				ans ++;
			}
		}
		cout << ans * aa;		
	}
	else
	{
		for (int i = 1; i <= n; i ++)
		{
			for (int j = 1; j <= a[i]; j ++)
			{
				s += c[i];
			}
		}		
		int len = s.size(); 
		for (int i = 1; i <= (len - 1) / 2; i ++)
		{
			if (s[i] != s[len - i])
			{
				ans ++;
			}
		}
		cout << ans;		
	}
	return 0;
}
