#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],ct[35],cnt;
bool vis[N];
signed main()
{
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=0;j<30;j++)
			if(a[i]&(1<<j)) ct[j]++;
	}
	int up=-1;
	for(int j=29;j>=0;j--)
	{
		if(ct[j]>=m) {up=j;break;}
	}
	if(up==-1)
	{
		cout<<0;
		exit(0);
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]&(1<<up)) vis[i]=1,cnt++;
	}
	int now=up-1;
	while(cnt>m&&now>=0)
	{
		int ct1=0;
		for(int i=1;i<=n;i++)
			if(vis[i])
				if(a[i]&(1<<now)) ct1++;
		if(ct1>=m&&ct1!=cnt)
		{
			for(int i=1;i<=n;i++)
				if(vis[i])
					if(!(a[i]&(1<<now))) vis[i]=0;
		}
		now--;
	}
	int ans=(1<<30)-1;
	for(int i=1;i<=n;i++)
		if(vis[i]) ans&=a[i];
	cout<<ans;
	return 0;
}