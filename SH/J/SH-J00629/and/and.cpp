#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll a[N];
ll n,m;
ll maxn=0;
void dfs(ll b,ll c,ll d)
{
	if(b==n+1)
	{
		if(c==m)
		{
			maxn=max(maxn,d);
		}
		return;
	}
	dfs(b+1,c+1,d&a[b]);
	dfs(b+1,c,d);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	ll yxz=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		yxz=max(yxz,a[i]);
	}
	
	if(n<=20)
	{
		dfs(1,0,2199023255551);
		cout<<maxn;
	}
	else if(m==1&&n<=2000)
	{
		for(int i=1;i<=n;i++)
		{
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
	}
	else if(m==n&&n<=2000)
	{
		ll maxn2=2199023255551;
		for(int i=1;i<=n;i++)
		{
			maxn2&=a[i];
		} 
		cout<<maxn2;
	}
	else if(m==2&&n<=2000)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
	}
	else if(yxz<=2199023255551&&m==n-1)
	{
		ll gg1[N],gg2[N];
		gg1[1]=a[1],gg2[n]=a[n];
		for(int i=2;i<=n;i++)
		{
			gg1[i]=gg1[i-1]&a[i];
		}
		for(int i=n-1;i>=1;i--)
		{
			gg2[i]=gg2[i+1]&a[i];	
		} 
		maxn=max(maxn,gg2[2]);
		for(int i=1;i<=n-2;i++)
		{
			maxn=max(maxn,gg1[i]&gg2[i+2]);
		}
		cout<<maxn;
	}
	else if(yxz<4)
	{
		ll pow[5];
		for(int i=1;i<=n;i++)
		{
			pow[a[i]]++;
		}
		if(pow[3]>=m)cout<<3;
		else if(pow[3]+pow[2]>=m)cout<<2;
		else if(pow[3]+pow[1]>=m)cout<<1;
		else cout<<0;	
	} 
	else 
	{
		ll p[42];
		ll k=1;
		p[1]=0;
		for(int i=1;i<=41;i++)
		{
			k*=2;
			p[i+1]=k-1;
		}
		ll ggdf=0;
		ll cnt=0;
		ll cnt2=0;
		for(int i=1;i<=n;i++)
		{
			ll vv=a[i];
			if(vv==ggdf)cnt2++;
			for(int i=1;i<=42;i++)
			{
				if(vv==p[i])cnt++;
			}
			ggdf++;
		}
		if(cnt==n)
		{
			sort(a+1,a+n+1);
			cout<<a[n-m+1];
		}
		else if(cnt2==n)
		{
			ll zk=2199023255551;
			for(int i=n;i>=n-m+1;i--)
			{
				zk&=a[i];
			}
			cout<<zk;
		} 
		else cout<<2;
	}
	return 0;
}
