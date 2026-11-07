#include<bits/stdc++.h>
#define LL long long
#define IC ios::sync_with_stdio(false);cin.tie(0);
#define MS(a,b) memset(a,b,sizeof(a));
using namespace std;
const LL N=5e5+5;
LL n,m,a[N],ans[N];
bool vis[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	IC
	cin>>n>>m;
	for(LL i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(LL i=1;i<=n;i++)
	{
		for(LL j=i;j<=n;j++)
		{
			for(LL k=j-1;k>=i;k--)
			{
				if(a[k]==a[j]&&!vis[k])
				{
					for(LL l=k;l<j;l++)
					{
						vis[l]=1;
					}
					break;
				}
			}
		}
		for(LL j=i;j<=n;j++)
		{
			if(!vis[j]) ans[a[j]]++;
		}
		MS(vis,0);
	}
	for(LL i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
