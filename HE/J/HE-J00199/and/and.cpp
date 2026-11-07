#include<bits/stdc++.h> 
using namespace std;
using ll=long long;

ll n,m,ans,a[200005],b[200005];
bool v[200005];

void dfs(ll s)
{
	if(s>m)
	{
		ans=b[1];
		for(int i=2;i<=m;i++)ans=ans&b[i];
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		v[i]=1;
		b[s]=a[i];
		dfs(s+1);
		v[i]=0;
	}
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)cin>>a[i];
	
	dfs(1);
	
	cout<<ans<<endl;
	
	return 0;
}
