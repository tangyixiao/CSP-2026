#include <bits/stdc++.h>
using namespace std;
long long n,m=-1,a[10000000],j=0;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		j=i+1;
		if(a[i]&a[j]>=m)
		{
		    m=a[i]&a[j];
		}
	}
	cout<<m;
	return 0;
}
