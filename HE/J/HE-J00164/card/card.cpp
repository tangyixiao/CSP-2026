#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1000000];
long long ans[100000];
bool fa=true;
bool c[1000000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){cin>>a[i];if(a[i]<a[i-1]) fa=false;}
	if(fa)
	{
		for(int i=1;i<=n;i++)
		{
			memset(c,false,sizeof c);
			for(int j=i;j<=n;j++)
			{
				if(!c[a[j]]) ans[a[j]]++,c[a[j]]=true;
			}
		}
	}
	if(n<=5&&m<=2)
	{
		for(int i=1;i<=n;i++)
		{
			memset(c,false,sizeof c);
			for(int j=n;j>=i;j--)
			{
				if(c[a[j]]) break;
				ans[a[j]]++;
				c[a[j]]=true;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
