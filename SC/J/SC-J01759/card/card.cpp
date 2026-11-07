#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin>>n>>m;
	int a[n+1],ans[m+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=0;i<=m;i++) ans[i]=0;
	if(m==1)
	{
		cout<<n;
		return 0;
	}
	if(m==2)
	{
		bool flag=true;
		for(int i=1;i<n;i++) if(a[i]!=a[i+1]) flag=false;
		if(flag) 
		{
			cout<<n;
			return 0;
		}
		for(int i=1;i<=n;i++)
		{
			int s1=0,s2=0;
			for(int j=i;j<=n;j++)
			{
				if(a[j]==1) s1++;
				else s2++;
			}
			if(s1>0) ans[1]++;
			if(s2>0) ans[2]++;
			cout<<ans[1]<<ans[2];
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		int l1[m+1],l2[n+1],l3[m+1];
		for(int j=0;j<=m;j++) l1[j]=l3[j]=0;
		for(int j=1;j<=n;j++) l2[j]=0; 
		
		for(int j=i;j<=n;j++)
		{
			if(l1[a[j]]==1)
			{
				for(int k=l3[a[j]];k<=n;k++)
				{
					l2[k]=0;
					l1[l2[k]]=0;
				}
			}
			
			l1[a[j]]=1;
			l2[j]=a[j];
			l3[a[j]]=j;
		}
		for(int j=i;j<=n;j++)
		{
			ans[l2[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}