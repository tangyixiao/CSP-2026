#include <bits/stdc++.h>
#define ll long long
using namespace std;
//priority_queue<ll> pq;
//priority_queue<ll,vector<ll>,greater<ll> > pq; //Ð¡¸ù¶Ñ
const int N=2e5+5,MOD=9;
ll b[N],n,m,a[N],mmax=-1e18,mmmm=0,vis[N];
void dfs(ll step,ll x)
{
	if(step==m+1)
	{
		mmmm=max(x,mmmm);
//		for(int i=1;i<=m;i++)
//			cout<<b[i]<<" ";
//		cout<<x<<'\n';
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			vis[i]=1;
			b[step]=a[i];
			dfs(step+1,x&a[i]);
			vis[i]=0;
		}
	}
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{cin>>a[i];mmax=max(mmax,a[i]);}
	if(m==1)
	{
		cout<<mmax;
		return 0;
	}
	else if(m==2)
	{
		ll ans=-1e18;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)
				{
					ans=max(ans,(a[i]&a[j]));
				}
			}
		}
		cout<<ans;
	}
	else if(m==n)
	{
		ll ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
	}
	else if(n<=20)
	{
		for(int i=1;i<=2;i++)
		{
			dfs(1,a[i]);
		}
		cout<<mmmm;
	}
	else{
		cout<<mmax;
	}
	return 0;
}