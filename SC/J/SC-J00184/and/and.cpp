#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100000005],maxx,i,j,ans;
int main()
{
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	if(m==1)
	{
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
		if(a[i]&a[j]>maxx)
		maxx=a[i]&a[j];
	}
	cout<<maxx;
	return 0;
}