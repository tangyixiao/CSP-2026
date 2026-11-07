#include<bits/stdc++.h>
using namespace std;
int n,m,t,s[10000000];
int a[100000001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		t=max(t,a[i]);
	}
	for(int i=0;i<n;i++)
	{
		s[i]=a[i];
	}
	if(m==1)
	{
	    cout<<t;
	}
	t=a[0];
	if(m==n)
	{
	for(int i=0;i<n;i++)
	{
		t=t&a[i];
	}
	}
	for(int i=1;i<n;i++)
	{
	    s[i-1]=s[i-1]&a[i];
		t=max(s[i-1],s[i]);
	}
	cout<<t;
	return 0;
}
