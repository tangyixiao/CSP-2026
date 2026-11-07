#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e3+5;
int n,m,mx=LLONG_MIN,a[N],s[N],ans;
bool flag;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
		if(a[i]!=i-1)flag=0;
	}
	if(m==1)
	{
		cout<<mx;
		return 0;
	}
	if(n==m)
	{
		int res=a[1];
		for(int i=2;i<=n;i++)
		{
			res&=a[i];
		}
		cout<<res;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		ans=a[i];
		for(int j=1;j<=m;j++)
		{
			ans=max(ans,a[j]&a[i]);
		}
	}
	cout<<ans;
	return 0;
}