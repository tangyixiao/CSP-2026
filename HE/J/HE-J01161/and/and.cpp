#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
bool cmp1(long long a,long long b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp1);
	long long maxn=a[0];
	for(int i=1;i<m;i++)
	{
		maxn&=a[i];
	}
	cout<<maxn;
	return 0;
}
