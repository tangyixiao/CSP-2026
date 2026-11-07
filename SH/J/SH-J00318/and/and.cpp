#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+10;
int n,m,a[N];
vector<int> v[30];
bool vis[N];
int get(int S,int id)
{
	return (S>>id)&1;
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	#endif
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=0;i<30;i++)
		for(int j=1;j<=n;j++)
			if(!get(a[j],i))
				v[i].push_back(j);
	int r=n,ans=0;
	for(int i=29;i>=0;i--)
	{
		int nr=r;
		for(auto j:v[i]) nr-=(!vis[j]);
		if(nr<m) continue;
		r=nr;
		for(auto j:v[i]) vis[j]=1;
		ans+=(1<<i);
	}
	cout<<ans;
	return 0;
}

