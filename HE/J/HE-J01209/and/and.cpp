#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,b,a[250000];
	cin>>n>>b;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long y=a[n];
	for(long long j=1;j<b;j++)
	{
		y=(y&a[n-j]);
	}
	cout<<y;
	return 0;
 } 
