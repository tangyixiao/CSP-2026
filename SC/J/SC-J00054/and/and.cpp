#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],dp[N];
bool ask(int x)
{
	int sum=1;
	for(int i=x+1;i<=n;i++)
	{
		int awa=a[x]&a[i];
		if(awa>=a[x])sum++;
		if(sum>=m)return 1;
	}
	if(sum>=m)return 1;
	return 0;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--)
	{
		if(ask(i))
		{
			cout<<a[i];
			return 0;
		}
	}
	return 0;
}