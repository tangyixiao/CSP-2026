#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int dp[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m;
	cin>>n>>m;
	long long max1=-1;
	for(int i=1;i<=n;++i)cin>>a[i];
	if(m==1)for(int i=1;i<=n;++i)max1=max(max1,a[i]);
	if(m==n){
		max1=a[1];
		for(int i=2;i<=n;++i)max1&=a[i];
	}
	cout<<max1;
	return 0;
}

