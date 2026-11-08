#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=0;
bool v[200005]; 
int dfs(int x,int c)
{
	if(c>m) return x;
	int ansx=0;
	for(int i=1;i<=n;i++)
	{
		if(v[i]==1) continue;
		v[i]=1;
		ansx=max(ansx,dfs(x&a[i],c+1));
		v[i]=0;
	}
	return ansx;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) ans=max(ans,dfs(a[i],1));
	cout<<ans;
	return 0;
}
