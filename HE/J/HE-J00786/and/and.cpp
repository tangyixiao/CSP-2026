#include<bits/stdc++.h>
using namespace std;
int a[200005];
int n,m;
long long s=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	s=a[n-m+1]&a[n-m+2];
	for(int i=n-m+3;i<=n;i++)
	{
		s=s&a[i];
	}
	cout<<s;
	return 0;
}
