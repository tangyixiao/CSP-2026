#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	int cnt=a[n-m+1];
	for(int i=n-m+2;i<=n;i++)
		cnt=cnt&a[i];
	cout<<cnt;
	return 0;
}
