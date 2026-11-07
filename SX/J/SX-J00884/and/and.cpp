#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
int n,m;
ll a[N];
ll mx,minx=-1;
ll res;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mx=max(a[i],mx);
		if(minx==-1) minx=a[i];
		else minx=min(minx,a[i]);
	}
	if(n<=20)
	{
		for(int i=0;i<1<<n;i++)
		{
			ll ans=-1;
			int cnt=0;
			for(int j=0;j<n;j++)
			{
				if(i>>j&1)
				{
					cnt++;
					ans=(ans==-1?a[j+1]:ans&a[j+1]);
				}
			}
			if(cnt==m) res=max(res,ans);
		}
		cout<<res<<'\n';
	}
	else if(m==1)
	{
		cout<<mx<<'\n';
	}
	else if(m==2)
	{
		for(int i=2;i<=n;i++)
			for(int j=1;j<i;j++)
				res=max(res,a[i]&a[j]);
	}
	else if(m==n)
	{
		res=a[1];
		for(int i=2;i<=n;i++) res=res&a[i];
		cout<<res<<'\n';
	}
	else cout<<3<<'\n';
	return 0;
}
