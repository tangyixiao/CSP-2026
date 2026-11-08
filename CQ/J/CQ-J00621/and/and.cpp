#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans;
int bz=2147483647;
bool cmp(const long long&n1,const long long&n2)
{
	return (n1&bz)>(n2&bz);
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1)
	{
		cout<<0;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	ans=a[1]&a[2];
	for(int i=3;i<=m;i++)
	{
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}
