#include<bits/stdc++.h>
using namespace std;
int a[500010];
int d[500010];
int to[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int t=1;
	while(t<=n)
	{
		int tell=0;
		for(int i=t;i<=n;i++)
		{
			int k=0;
			for(int j=1;j<=tell;j++)
			{
				if(d[j]==a[i]) 
				{
					tell=j-1;
					break;
				}
			}
			d[++tell]=a[i];
		}
		for(int i=1;i<=tell;i++)
		{
			to[d[i]]++;
		}
		t+=1;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<to[i]<<" ";
	}
	return 0;
 }

