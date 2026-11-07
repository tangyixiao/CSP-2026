#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n+78];
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(long long i=m;i>=1;i--)
	{
		cout<<i;
	}
	return 0;
}
