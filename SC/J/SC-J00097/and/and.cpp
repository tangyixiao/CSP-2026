#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int a[N];
bool cmp(int x,int y)
{
	return x>y;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int p;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		if(i==1)
		{
			p=a[i];
		}
		p&=a[i];
 	}
	sort(a+1,a+n+1,cmp);
	if(m==2)
	{
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)
				{
					ans=max(ans,a[i]&a[j]);
				}
			}
		}
		cout << ans;
		return 0;
	}
	if(m==n)
	{
		cout << p;
		return 0;
	}
	int ans=a[1];
	for(int i=2;i<=m;i++)
	{
		ans=ans&a[i];
	}
	cout << ans;
	return 0;
}