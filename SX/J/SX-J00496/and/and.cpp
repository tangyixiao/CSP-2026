#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(n==m) 
	{
		int sum = (a[1] & a[2]);
		for(int i=3;i<=n;i++)
		{
			sum&=a[i];
		}
		cout<<(sum);
		return 0;
	}
	return 0;
}
