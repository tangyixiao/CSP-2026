#include<bits/stdc++.h>
using namespace std;
int n,m; 
vector<int> a(1000000);
vector<int> c(1000000);
vector<int> b(1000000);
int s,d;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		c[i]=a[i];
		for(int j=1;j<=i;j++)
		{
			if(a[i]==c[j])
			{
				for(int x=j;x<=i-1;x++)
				{
					c[j]=0;
				}
			}
		}
		for(int z=1;z<=n;z++)
		{
			for(int x=1;x<=i;x++)
			{
				if(a[z]==c[x])
				{
					b[a[i]]++;
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<b[a[i]];
	}
}

