#include <bits/stdc++.h>
#define int long long
#define pii pair<long long, char>
using namespace std;

stack<pii> stc;
int a[200005];
char ch[200005];

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n, len = 0;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i] >> ch[i];
		len += a[i];
	}
	
	int l = 1, r = n, ans = 0;
	while(1)
	{
		if(a[l] == a[r])
		{
			if(ch[l] != ch[r])
				ans += a[l];
			l++;
			r--;
		}
		else
			if(a[l] < a[r])
			{
				if(ch[l] != ch[r])
					ans += a[l];
				a[r] -= a[l];
				l++;
			}
		else
			if(a[l] > a[r])
			{
				if(ch[l] != ch[r])
					ans += a[r];
				a[l] -= a[r];
				r--;
			}
		if(l >= r)
			break;
	}
	
	cout << ans;
	return 0;
}
