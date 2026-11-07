#include<bits/stdc++.h>
using namespace std;
int a[5*100005],b[5*100005],flag[300005],ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	int f=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
		if(i>=2 && a[i]<a[i-1]) f=0;
	}
	if(f==1)
	{
		for(int i=1;i<=n;i++)
			cout<<i<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		int tot=0;
		for(int j=1;j<=n;j++) b[i]=a[i];
		for(int j=1;j<=m;j++) flag[j]=0;
		for(int j=i;j<=n;j++)
		{
			if(flag[b[j]]==0)
			{
				flag[b[j]]=j;
			}
			else
			{
				for(int o=flag[b[j]];o<j;o++) 
				{
					flag[b[o]]=0;
					b[o]=0;
				}
				flag[b[j]]=j;
			}
		}
		for(int j=i;j<=n;j++) 
		{
			ans[b[j]]++;
	 	}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
} 
