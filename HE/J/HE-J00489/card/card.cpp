#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[50005],b[20005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
scanf("%d%d",&n,&m);
for(int i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
int max1=0; 
for(int i=1;i<=n ;i++)
{int c[50005]={0};
int d[20005]={0};

	for(int j=i;j<=n;j++)
	{
		if(c[a[j]]==0)	
		{
		d[j]=a[j];
		c[a[j]]=j;		
		}
		else
		{
			for(int f=c[a[j]];f<j;f++)
			{
				d[f]=0;
				c[a[j]]=0;
			}
		}

	}
for(int w=1;w<=n;w++)
	{
			b[d[w]]+=1;
	}
}	
for(int i=1;i<=m;i++)
{
	cout<<b[i]<<" ";
}	
		return 0;
}
