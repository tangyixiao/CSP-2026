#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	int a[n],b[m]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=m;j++)
	{
		for(int o=0;o<n;o++)
		{
			if(a[o]==j)
			{
				b[j]++;
			}
		}
	}
	int f1[999]={0},f2[999]={0},z=0;
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(a[y]==a[x])
			{
				
				f1[z]=y;
				f2[z]=x;
				sort(f1[z],f2[z]);
				if(a[y]>a[x])
				{
					a[x]=0;
				}
				else
				{
					a[y]=0;
				}
				z++;
				
			}
		}
	}
	for(int e=0;e<z;e++)
	{
		if(f1[e]==0)
		{
			for(int t=0;t<m;t++)
			{
				cout<<b[t];
			}
		}
		for(int d=f1[e];d<f2[e];d++)
	    {
		    b[d]--;
	    }
	}
	
	
	
	
	
	fclose(stdin);
    fclose(stdout);
	return 0;
}
