#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
ll a[N],ans=0;
vector <ll> g[35];
int n,m,cnt[35];
void dfs(int x,vector<ll> ve)
{
	vector<ll> nex[35];
	int cn[35],ne=-1;
	for(int i=0;i<=30;i++) cn[i]=0;
	for(int i=0;i<ve.size();i++)
	{
		ll v=ve[i];
		for(int j=x-1;j>=0;j--)
		{
			if(((1<<j)&v))
			{
				cn[j]++;
				nex[j].push_back(v);
				if(cn[j]>=m) ne=max(ne,j);
			}
		}
	}
	if(ne==-1) return ;
	ans+=(1<<ne);
	dfs(ne,nex[ne]);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int x=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=30;j>=0;j--)
			if(((1<<j)&a[i]))
			{
			 	g[j].push_back(a[i]);
			 	cnt[j]++;
			 	if(cnt[j]>=m) x=max(x,j);
			}
	}
	if(x==-1) cout<<0;
	else
	{
		ans=(1<<x);
		dfs(x,g[x]); 
		cout<<ans;
	}
	return 0;
}