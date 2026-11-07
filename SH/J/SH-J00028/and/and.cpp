#include<bits/stdc++.h>
using namespace std;
long long a[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1; i<=n; i++)
		cin>>a[i];
	long long ans=0;
	for(long long i=1; i<=n; i++)
		ans=max(ans,a[i]);
	cout<<ans;
	return 0;
} 
