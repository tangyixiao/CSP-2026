#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	long long sum=a[n];
	for(int i=n-1;i>=n-m+1;i--)
	{
		sum=sum&a[i];
	}
	cout<<sum;
	return 0;
 } 
