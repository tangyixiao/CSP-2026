#include<bits/stdc++.h>
#define int long long 
using namespace std;
bool comp(int x,int y)
{
	return x>y;
}
int n,m,cnt=1,ans=0;
int a[200005],b[200005];
signed main()
{
	freopen("ans.in","r",stdin);
	freopen("ans.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,comp);
	cnt=a[1];
	for(int i=2;i<=m;i++)
	{
		cnt&=a[i];
	}
	cout<<cnt;
	return 0;
}