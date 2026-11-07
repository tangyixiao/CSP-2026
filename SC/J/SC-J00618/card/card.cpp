#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N],b[N],c[N],tot=N,vis[N];
map<int,int>mp;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],mp[a[i]]=-1;
	for(int i=n;i>=1;i--)
	{
		c[--tot]=a[i];
		if(vis[a[i]])tot=mp[a[i]];
		else mp[a[i]]=tot;
		for(int j=1;j<=m;j++)vis[j]=0;
		for(int j=tot;j<N;j++)b[c[j]]++,vis[c[j]]=1;
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	return 0;
}