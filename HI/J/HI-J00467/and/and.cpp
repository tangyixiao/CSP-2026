#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
bool cmp(long long a,long long b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,c;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	c=a[1];
	for(int i=2;i<=m;i++)
	{
		c=c&a[i];
	}
	cout<<c;
	return 0;
 } 
