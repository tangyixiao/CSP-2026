#include<bits/stdc++.h>
using namespace std;
int a[500010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,sum=0;
	scanf("%d%d",&n,&m); 
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<a[i-1]&&i!=1)
		{
			sum++; 
		} 
	}
	ans[m]=n;
	if(sum==0)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]<a[i+1])
			cout<<i<<" "; 
		}
		cout<<n;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			for(int f=i;f<=n;f++)
			{
				for(int j=f;j>=0;j--)
				{
					if(a[f]==a[j])
					{
						for(int k=j+1;k<f;k++)
						{
							a[k]=0;
						}
					}
				}
			}
			for(int t=i;t<=m;t++)
			{
				if(a[t]!=0)
				{
					ans[t]++;
				}
			}
		} 
		for(int i=1;i<=m;i++)
		{
			cout<<ans[m]<<" ";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
