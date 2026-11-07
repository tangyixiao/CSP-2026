#include<bits/stdc++.h>
using namespace std;
const long long N=1000000;
long long a[N],b[N],c[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,nn,m;
	cin>>n>>m;
	nn=n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<nn;j++)
		{
			c[j]=a[j];
			for(int k=i;k<j;k++)
			{
				if(c[k]==c[j])
				{
					for(int h=k+1;h<=j;h++)
					{
						c[h]=0;
					}
				}
			}
		}
		for(int j=i;j<nn;j++)
		{
			b[c[j]]+=1;
		}
		for(int j=i;j<nn;j++)
		{
			c[j]=0;
		}
		nn=n;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<' ';
	}
	return 0;
}