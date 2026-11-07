#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,i,j,k,e,x;
	cin>>n>>m;
	int a[n+1],b[m+1]={0},c[n+1]={0};
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			x=1;
			for(k=1;k<j;k++)
			{
				if(x==1)
				if(a[j]==c[k])
				{
					x=0;
				}
				if(x==0)
				c[k]=0;
			}
			c[j]=a[j];
		}
		for(j=1;j<=n;j++)
		if(c[j]!=0)
		{
			b[c[j]]++;
			c[j]=0;
		}
	}
	for(i=1;i<=m;i++)
	cout<<b[i]<<" ";
	return 0;
}
