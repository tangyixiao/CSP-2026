#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int d[500005],a[500005],c[300005]={0};
int main() 
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		d[i]=a[i];
	}
	int i,j;
	for(int k=1;k<=n;k++)
	{
		for(i=k;i<=n;)
		{
			int x;
			bool l=1;
			for(j=n;j>i;j--)
			{
				if(a[j]==a[i]&&l)
				{
					l=0;
					x=j+1;
				}
				if(!l) a[j]=0;
			}
			if(l) i++;
			else i=x; 
		}
		for(int p=k;p<=n;p++)
		{
			if(a[p]!=0)c[a[p]]++;
		}
		for(int p=1;p<=n;p++)
		a[p]=d[p];
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<' ';
	}
	return 0;
}