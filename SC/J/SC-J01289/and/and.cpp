#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n,u,m,e,i,j,x,y,l,r;
string s;
long long a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	u=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		u=max(u,a[i]);
	}
	cout<<u;
	return 0;
}