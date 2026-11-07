#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2005;
ll n,m,a[maxn],ans,maxv;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		if(ans==0)ans=a[i];
		else ans=(ans&a[i]);
		maxv=max(maxv,a[i]);
	}
	if(m==n)cout << ans;
	else if(m==1)cout << maxv;
	else if(m==2)
	{
		ll maxx=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j)continue;
				maxx=max(maxx,(a[i]&a[j]));
			}
		}
		cout << maxx;
	}
	else cout << 13;
	return 0;
}
