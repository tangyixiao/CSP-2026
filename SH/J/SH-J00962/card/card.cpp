#include <bits/stdc++.h>
using namespace std;
long long a[500005],cnt[300005],f[300005],g[300005],m,n;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)f[j]=0;
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]]==0)
			{
				f[a[j]]=1;
				g[a[j]]=j;
			}
			else
			{
				for(int k=g[a[j]];k<j;k++)f[a[k]]=0;
				f[a[j]]=1;
			}
		}
		for(int j=1;j<=m;j++)if(f[j]==1)cnt[j]++;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
}
