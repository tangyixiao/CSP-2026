#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[300005],ans[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		int vis[100000]={},b[100000],le=50001,ri=50002;
		for(int j=i;j<n;j++)
		{
			if(vis[a[j]]==0)
			{
				b[ri]=a[j];
				vis[a[j]]=1;
				ri++;
			}
			else
			{
				b[le]=a[j];
				le--;
				while(b[ri]!=a[j])
				{
					vis[b[ri]]=0;
					ri--;
				}
			}
		}
		for(int j=1;j<=m;j++)
		{
			if(vis[j]) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}
