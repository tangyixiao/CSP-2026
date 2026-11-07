#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n,u,m,e,i,j,x,y,l,r;
string s;
long long a[500005],c[300005],d[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	c[a[n]]=-1;
	for(i=n-1;i>0;i--)
	{
		if(c[a[i]]==0)
		{
			c[a[i]]=a[i+1];
		}
	}
	c[a[n]]=0;
	for(i=1;i<=n;i++)
	{
		//cout<<a[i]<<' '<<c[a[i]]<<endl;
		d[a[i]]++;
		d[c[a[i]]]++;
	}
	d[a[n]]=n;
	for(i=1;i<=m;i++)
	{
		cout<<d[i]<<' ';
	}
	return 0;
}