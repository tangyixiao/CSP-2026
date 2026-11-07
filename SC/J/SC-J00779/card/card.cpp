#include<bits/stdc++.h>
using namespace std;
const int maxn=500010;
int n,m,a[maxn],tot=0,s[maxn],pos[maxn],ans[maxn];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++) pos[j]=0;
		for(int j=i;j<=n;j++)
		{
			if(s[pos[a[j]]]==a[j]&&pos[a[j]]<=tot) tot=pos[a[j]];
			else s[++tot]=a[j],pos[a[j]]=tot;
		}
		while(tot>0) ans[s[tot--]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}