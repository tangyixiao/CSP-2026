#include<bits/stdc++.h>
using namespace std;
const int maxn=200010;
int n,m,a[maxn],t[40],ans=0;
bool vis[maxn];
void split(int k,int up)
{
	for(int i=0;i<=up;i++) if((k&(1<<i))) t[i]++;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],split(a[i],30);
	int r=30;
	while(r>=0)
	{
		if(t[r]<m) 
		{
			r--;
			continue;
		}
		ans+=(1<<r);
		for(int i=0;i<=r;i++) t[i]=0;
		for(int i=1;i<=n;i++) 
		{
			if(vis[i]) continue;
			if(!(a[i]&(1<<r))) 
			{
				vis[i]=true;
				continue;
			}
			split(a[i],r-1);
		}
		r--;
	}
	cout<<ans;
	return 0;
}