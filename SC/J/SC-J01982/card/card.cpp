#include<bits/stdc++.h>
using namespace std;
long long n,m,i,a[500020],j;
unordered_map<long long,long long>p,l,k;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		l[a[i]]++;
		p[a[i]]=max(p[a[i]],i);
	}
	if(m*m>600000020)
	{
		for(i=1;i<=m;i++)
		{
			cout<<p[a[i]]<<" ";
		}
		return 0;
	}
	for(i=1;i<=m;i++) 
	{
		for(j=p[i]+1;j<=n;j++)
		{
			if(p[a[j]]!=j)j=p[a[j]];
			k[a[j]]+=l[i];
		}
	}
	for(i=1;i<=m;i++)
	{
		if(i==m)
		{
			cout<<k[i]+l[i];
			break;
		}
		cout<<k[i]+l[i]<<" ";
	}
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/