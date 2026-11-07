#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
ll n,m,a[N],ans,sum1[N],sum2[N],sum[5];
bool f=1;
bool cmp(int x,int y){return x>y;}
void dfs(ll d,ll sum,ll len,ll f)
{
	if(d>n&&len!=m) return;
	if(len==m)
	{
		ans=max(ans,sum);
		return;
	}
	if(!f)
	{
		if(len<m) dfs(d+1,a[d],len+1,1);
		dfs(d+1,sum,len,0);
	}
	else
	{
		if(len<m) dfs(d+1,sum&a[d],len+1,f);
		dfs(d+1,sum,len,f);
	}
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(a[i]>3) f=0;
	}
	if(n<=20)
	{
		dfs(1,0,0,0);
		cout<<ans;
		return 0;
	}
	if(m==1)
	{
		for(int i=1;i<=n;++i) ans=max(ans,a[i]);
		cout<<ans;
		return 0;
	}
	if(m==n)
	{
		ans=a[1];
		for(int i=2;i<=n;++i) ans&=a[i];
		cout<<ans;
		return 0;
	}
	if(m==2)
	{
		for(int i=1;i<=n;++i)
			for(int j=1;j<=n;++j)
			{
				if(i==j) continue;
				ans=max(ans,(a[i]&a[j])*1ll);
			}
		cout<<ans;
		return 0;
	}
	if(m==n-1)
	{
		sum1[1]=a[1];
		sum2[n]=a[n];
		for(int i=2;i<=n;++i) sum1[i]=(sum1[i-1]&a[i]);
		for(int i=n-1;i>=1;--i) sum2[i]=(sum2[i+1]&a[i]);
		for(int i=1;i<=n;++i)
		{
			if(i==1) ans=max(ans,sum2[i+1]);
			else if(i==n) ans=max(ans,sum1[i-1]);
			else ans=max(ans,(sum1[i-1]&sum2[i+1]));
		}
		cout<<ans;
		return 0;
	}
	if(f)
	{
		for(int i=1;i<=n;++i) sum[a[i]]++;
		if(sum[3])
		{
			ans=3;
			m-=sum[3];
			if(sum[2]>=m) ans=2;
			else if(sum[1]>=m) ans=1;
			else ans=0;
		}
		else if(sum[2])
		{
			ans=2;
			ll m2=m-sum[2];
			if(m2>0&&m<=sum[1]) ans=1;
			else ans=0;
		}
		else if(sum[1])
		{
			ans=1;
			m-=sum[1];
			if(m) ans=0;
		}
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=2;i<=m;++i) ans&=a[i];
	cout<<ans;
	return 0;
}
