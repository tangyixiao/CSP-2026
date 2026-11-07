#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[50005];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int e[50005]={0};
	for(int i=1;i<=n;i++)
	{
		int b=1,c[30005]={0},d[50005]={0};
		for(int y=i;y<=n;i++)
		{
			if(!c[a[y]])
			{
				d[b]=a[y];
				b++;
				c[a[y]]=b;
			}
			else
			{
				b=c[a[y]];
			}	
		}
		for(int j=1;j<b;j++)
		{
			e[j]++;
		}
	}
	for(int i=1;i<n;i++)
	{
		cout<<e[i]<<" ";
	}
	return 0;
}
