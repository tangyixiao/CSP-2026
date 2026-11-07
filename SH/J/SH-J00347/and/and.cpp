#include <bits/stdc++.h>
using namespace std;
long long a[30000005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<long long>());
	long long ans=a[0];
	for(long long i=1;i<m;i++)
	{
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}
