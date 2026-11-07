#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],c[500005],sum[500005],pos;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n<=5000)
	{
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			memset(c,0,sizeof(c));
			for(int j=i;j<=n;j++)
			{
				c[j]=a[j];
			}
			for(int j=i+1;j<=n;j++)
			{
				pos=0;
				for(int k=i;k<j;k++)
				{
					if(c[k]==c[j])
					{
						pos=k;
						break;
					}
				}
				if(pos!=0)
				{ 
					for(int k=pos;k<j;k++)
					{ 
						c[k]=0;
					}
				}
			}
			for(int j=i;j<=n;j++)
			{
				if(c[j]!=0) sum[c[j]]++;
			}
		}
	}
	else
	{
		for(int i=1;i<=n;i++) cin>>a[i];
		if(m<=2)
		{
			sum[a[n]]+=n;
			if(a[n]==1)
			{
				for(int i=1;i<=n;i++)
				{
	            	if(a[i]==2) sum[2]++;
	        	}
			}
			if(a[n]==2)
			{
				for(int i=1;i<=n;i++)
				{
	            	if(a[i]==1) sum[1]++;
	        	}
			}  
		}
		else
		{
			for(int i=1;i<=n;i++)
			{
				sum[a[i]]=i;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<sum[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
