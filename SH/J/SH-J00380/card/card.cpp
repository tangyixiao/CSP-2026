#include<bits/stdc++.h>
using namespace std;
int a[1111111],b[1111111],d[1111111];
bool check(int x,int xx)
{
	for(int i=0;i<xx;i++)
	{
		if(b[i]==x)
		{
			return 1;
		}
	}
	return 0;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[j]=0;
		}
		for(int j=i;j<n;j++)
		{
			if(check(a[j],j)==1)
			{
				for(int k=j+1;k<n;k++)
				{
					b[k]==0;
				}
			}
			else
			{
				b[j]=a[j];
			}
		}
		for(int j=1;j<=m;j++)
		{
			for(int k=i;k<n;k++)
			{
				if(b[k]==j)
				{
					d[j]++;
					break;
				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<d[i]<<' ';
	}
	return 0;
}
