#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000005],n,m,sum=0,cnt=0;
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{cin>>a[i];}
	for(int i=1;i<=n;i++)
	{for(int j=i+1;j<=n;j++)
	{cnt=(a[i]&a[j]);

	sum=max(sum,cnt);
	}
	}
	cout<<sum;
	return 0;
}
