#include <bits/stdc++.h>
using namespace std;
int a[500010],cnt[500010],f[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		int tot=0;
		memset(f,0,sizeof(f));
		for(int j=i;j<=n;j++)
		{
			
			if(f[a[j]]!=0)
			{
				for(int k=1;k<=m;k++)if(f[k]>f[a[j]])f[k]=0;
			}
			else
			{
				f[a[j]]=j;
			}
		}
		for(int j=1;j<=m;j++)if(f[j]!=0)cnt[j]++;
	}
	for(int i=1;i<=m;i++)printf("%d ",cnt[i]);
	return 0;
}
