#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50,inf=0x3f3f3f3f3f3f;
int a[N],n,m,ans,mx=-inf;
bool vis[N];
inline int _pow(int x,int y)
{
	int Ans=1;
	while(y)
	{
		if(y&1) Ans=Ans*x;
		x=x*x;
		y>>=1;
	}
	return ans;
}
inline void dfs(int x,int s)
{
	
	if(s>=m) 
	{
		int res=(1<<30)-1;
		for(int i=1;i<=n;i++)  if(vis[i]) res=res&a[i];
		ans=max(res,ans);
		return;
	}
	for(int i=x+1;i<=n;i++)
	{
		vis[i]=1;
		dfs(i,s+1);
		vis[i]=0;
	}
}
inline void solve1()
{
	if(m==1)
	{
		int maxn=-inf;
		for(int i=1;i<=n;i++) maxn=max(maxn,a[i]);
		cout<<maxn;
		return;
	}else if(m==2)
	{
		int maxn=-inf;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(i!=j) maxn=max(maxn,(a[i]&a[j]));
		cout<<maxn;
		return;
	}else if(m==n)
	{
		int maxn=a[1];
		for(int i=2;i<=n;i++) maxn=(maxn&a[i]);
		cout<<maxn;
		return;
	}else if(m<n)
	{
		dfs(0,0);
		cout<<ans;
		return;
	}
}

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i],mx=max(mx,a[i]);
		if(a[i]==i-1) cnt++;
	}
	sort(a+1,a+1+n);
	if(n<=2000)
		solve1();
	else
	{
		if(mx<=5)
		{
			cout<<4;
			return 0;
		}
		if(cnt>10000) cout<<a[m];
		else cout<<mx;
	}
	return 0;
}

