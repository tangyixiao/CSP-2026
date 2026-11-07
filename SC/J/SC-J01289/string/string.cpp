#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,l,e,s;
char u[200005];
long long a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	s=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		cin>>u[i];
		s+=a[i];
	}
	l=n;
	for(i=1;i<=n;i++)
	{
		if(e>=(s/2))
		{
			break;
		}
		if(a[i]==a[l])
		{
			if(u[i]!=u[l])
			{
				m+=a[i];
			}
			e+=a[i];
			l--;
			continue;
		}
		if(a[i]>a[l])
		{
			a[i]-=a[l];
			if(u[i]!=u[l])
			{
				m+=a[l];
			}
			e+=a[l];
			i--;
			l--;
			continue;
		}
		if(a[i]<a[l])
		{
			a[l]-=a[i];
			if(u[i]!=u[l])
			{
				m+=a[i];
			}
			e+=a[i];
		}
	}
	cout<<m;
	return 0;
}