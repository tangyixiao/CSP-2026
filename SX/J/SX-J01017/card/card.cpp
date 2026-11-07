#include<bits/stdc++.h>
using namespace std;
int n,m,a[505000],f[505000],signd[505000];
long long ans[305000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}

	for(int k=1;k<=n;k++)
	{
		for(int i=k;i<=n;i++)
		{
   			for(int j=i;j<=n;j++)
			{
				if(a[i]==a[j])i=j;
			}
			ans[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
}