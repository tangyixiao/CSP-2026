#include <bits/stdc++.h>
using namespace std;
#define int long long

struct node{
	int a;
	char c;
}d[210101];

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> d[i].a >> d[i].c;
	}
	int ldx=1, rdx=n, lde=d[1].a, rde=d[n].a;
	int ans=0;
	while (ldx<=rdx)
	{
		int now=min(lde, rde);
		if (d[ldx].c!=d[rdx].c) ans+=now;
		lde-=now, rde-=now;
		if (lde==0)
		{
			ldx++;
			lde=d[ldx].a;
		}
		if (rde==0)
		{
			rdx--;
			rde=d[rdx].a;
		}
	}
	cout << ans;
	return 0;
}
//不断推进，如果有多余的减去偏移量
