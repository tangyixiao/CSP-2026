#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=2e5+5;
ll n,m,a[N],ans=-1145141919810;
ll st[N][30];
bool vis[N];
void dfs(ll step,ll now)
{
	for(ll i=1;i<=n;i++)
	{
		if(vis[i]) continue;
		vis[i]=1;
		if(step==m) ans=max(ans,(now==-1145141919810?a[i]:now&a[i]));
		else dfs(step+1,(now==-1145141919810?a[i]:now&a[i]));
		vis[i]=0;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++)
		cin>>a[i];
	if(n<=20)
	{
		dfs(1,-1145141919810);
		cout<<ans;
	}
	else if(n<=2000)
	{
		if(m==1)
		{
			ll maxx=-1145141919810;
			for(ll i=1;i<=n;i++)
				maxx=max(maxx,a[i]);
			cout<<maxx;
			return 0;
		}
		else if(m==n)
		{
			ll anss=a[1];
			for(ll i=2;i<=n;i++)
				anss&=a[i];
			cout<<anss;
			return 0;
		}
		else if(m==2)
		{
			ll anss=-1145141919810;
			for(ll i=1;i<=n;i++)
				for(ll j=i+1;j<=n;j++)
					anss=max(anss,a[i]&a[j]);
			cout<<anss;
			return 0;
		}
	}
	else
	{
		if(m==n-1)
		{
			ll maxx=-1145141919810;
			for(ll i=1;i<=n;i++)
				st[i][0]=a[i];
			for(ll j=1;(1<<j)<=n;j++)
				for(ll i=1;i<=n;i++)
					st[i][j]=st[i][j-1]&st[i+((1<<j)-1)][j-1];
			for(ll i=1;i<=n;i++)
			{
				if(i==1)
				{
					ll x=log2(n-2+1);
					maxx=max(maxx,st[2][x]&st[n-(1<<x)+1][x]);
				}
				else if(i==n)
				{
					ll x=log2(n-1);
					maxx=max(maxx,st[1][x]&st[n-1-(1<<x)+1][x]);
				}
				else
				{
					ll x=log2(i-1);
					ll p=st[1][x]&st[i-1-(1<<x)+1][x];
					x=log2(n-i+2);
					ll q=st[i+1][x]&st[n-(1<<x)+1][x];
					maxx=max(maxx,p&q);
				}
			}
			cout<<maxx;
			return 0;
		}
		ll mx=-1145141919810;
		bool lg=1;
		for(ll i=1;i<=n;i++)
		{
			mx=max(mx,a[i]);
			if(abs(log2(a[i])-(ll)log2(a[i]))>1e6)
				lg=0;
		}
		if(lg)
		{
			stable_sort(a+1,a+n+1,greater<ll>());
			ll anss=a[1];
			for(ll i=2;i<=m;i++)
				anss&=a[i];
			cout<<anss;
			return 0;
		}
		else
		{
			ll anss=a[n];
			for(ll i=n-1;i>=n-m+1;i--)
				anss&=a[i];
			cout<<anss;
			return 0;
		}
	}
	return 0;
}
/*
dfs            #1~5  20pts * V
cout<<max{a_i} #6    5pts    V
cout<<&{a_i}   #7    5pts    V
a_i&a_j        #8~10 15pts * V
^^^^^^^^^^^50pts^^^^^^^^^^^^

ST          #11~12  10pts   V
A           #13     5pts    V
B           #14~15  10pts * V
^^^^^^^^^^^^25pts^^^^^^^^^^^^
[75,75]
*/