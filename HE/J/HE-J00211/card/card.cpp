#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=3e5+50,inf=0x3f3f3f3f3f3f;
int n,a[N],m,ans[N];
int vis[N],last[N],pos[N];
int d[1000000];
inline void work(int p)
{
	memset(last,0,sizeof last);
	memset(vis,0,sizeof vis);
	memset(pos,0,sizeof pos);
	for(int i=p;i<=n;i++)
	{
		if(!vis[a[i]])
		{
			pos[i]=1;
			vis[a[i]]=1;
			last[a[i]]=i;
		}
		else if(vis[a[i]]) 
		{
			for(int j=last[a[i]];j<i;j++)
			{
				pos[j]=0;
				vis[a[j]]=0;
			}
			pos[i]=1;
			last[a[i]]=i;
			vis[a[i]]=1;
		}
	}
	for(int i=1;i<=n;i++) if(pos[i]) ans[a[i]]++;
} 

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
		work(i);
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}

