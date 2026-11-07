#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],tj[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n>=200005&&m==2)
	{
		int tt[15];
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=a[n]) tt[a[i]]++;
			tt[a[n]]++;
		}
		for(int i=1;i<=m;i++)
		{
			cout<<tt[i]<<" ";
		}
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int b[500005]={},ax=0,t[500005]={};
		for(int j=i;j<=n;j++)
		{
			b[++ax]=a[j];
			t[a[j]]++;
			if(t[a[j]]>1) 
			{
				while(1)
				{
					t[b[ax]]--;
					ax--;
					if(t[a[j]]==0) break;
					
				}
			}
			b[++ax]=a[j];
			t[a[j]]++;
		}
		for(int j=1;j<=m;j++)
		{
			if(t[j]>=1) tj[j]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<tj[i]<<" ";
	}
	return 0;
}
