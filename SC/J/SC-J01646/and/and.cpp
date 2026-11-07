#include<bits/stdc++.h>
#define ll long long
#define pp pair<ll,ll>
const ll N=3e5+1010; 
using namespace std;
ll read()
{
	ll x=0,f=1;
	char ch=getchar();
	while(ch>'9'||ch<'0')
	{
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9')
	{
		x=x*10+ch-48;
		ch=getchar();
	}
	return x*f;
}
ll x,k[N][35],vis[N],sum,ans,n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
	{
		x=read();
		for(ll j=34;j>=0;j--) k[i][35-j]=(x>>j)&1; 
	}
	for(ll i=1;i<=35;i++)
	{
		sum=0; 
		for(ll j=1;j<=n;j++)
		{
			if(vis[j]) continue;
			sum+=k[j][i];
		}
//		cout<<sum<<' '<<i<<'\n';
		if(sum>=m)
		{
			ans+=(1<<(35-i));
			for(ll j=1;j<=n;j++)
			{
				if(k[j][i]==0) vis[j]=1;
			} 
		 } 
	}
	cout<<ans; 
	return 0;
}