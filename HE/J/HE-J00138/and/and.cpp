#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+66;
int n,m,a[N],mx,sum,ans;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	sum=a[1];
	for(int i=2; i<=n; i++) sum&=a[i];
	if(n==m) cout<<sum;
	if(m==1) cout<<mx;
	else if(m==2)
	{
		for(int i=1; i<n; i++)
		{
			for(int j=i+1; j<=n; j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	else
	{
		sort(a+1,a+1+n);
		ans=a[n];
		for(int i=n-1; i>=m; i--)
		{
			ans&=a[i];
		}
		cout<<ans;
	}
	return 0;
}

