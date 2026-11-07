#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,a[N],res=0,ans=0;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=30;i>=0;i--)
	{
		int cnt=0;
		for (int j=1;j<=n;j++)
		{
			if ((a[j]&res)==res&&((a[j]&(1ll<<i))==(1ll<<i)))
				cnt++;
		}
		if (cnt>=m)
		{
			ans=ans+(1ll<<i);
			res=res+(1ll<<i);
		}
	}
	cout << ans;
}
/*
4 2
3 15 12 12

 5 3
31 3 1 15 7


*/ 
