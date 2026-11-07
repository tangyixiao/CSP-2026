#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],f[2005][2005],mx,x[5];
int ad(int a,int b)
{
	int s=0,p=1;
	while(a!=0&&b!=0)
	{
		if(a%2==b%2)s+=p*(a%2);
		p*=2;
		a/=2;
		b/=2;
	}
	return s;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n>2005)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			mx=max(mx,a[i]);
			if(a[i]<=4)x[a[i]]++;
		}
		if(mx<=4)
		{
			if(x[4]>=m)cout<<4;
			else if(x[3]>=m)cout<<3;
			else if(x[3]+x[2]>=m)cout<<2;else cout<<1;
			return 0;
		}
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			f[i][1]=max(f[i-1][1],a[i]);
		}
		for(int i=1;i<=n;i++)
		for(int j=1;j<i;j++)
		for(int k=1;k<=min(j,m-1);k++)
		{
			f[i][k+1]=max(f[i][k+1],ad(f[j][k],a[i]));
		}
		cout<<f[n][m];
}
