#include<bits/stdc++.h>
using namespace std;
int n,a[10005],m;
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
	int t=a[n];
	for(int i=1;i<m;i++)
	{
		t=t&a[n-i];
	}
	cout<<t;
	return 0;
}
