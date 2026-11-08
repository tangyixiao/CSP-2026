#include<bits/stdc++.h>
using namespace std;
long long n,a[2000],e=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string q[1000],w[1000],c[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=0;i<n/2;i++)
	{
		for(int j=1;j<=a[i];j++)
			q[j]+=c[i];
	}
	if(n%2==1)
	{
		if(a[n/2+1]%2==1)
			a[n/2+1]-=1;
		for(int i=n/2;i<=a[n/2+1]+n/2;i++)
			q[i]+=c[n/2+1];
		for(int i=0;i<a[n/2+1];i++)
			w[i]+=c[n/2+1];
	}
	for(int i=n;i>=n/2+1;i--)
	{
		for(int j=1;j<=a[i];j++)
			w[j]+=c[i];
	}
	for(int i=0;i<n/2;i++)
	{
		if(q[i]!=w[i])
			e++;
	}
	cout<<e;
	return 0;
 } 
