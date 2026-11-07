#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int pow1=pow(2,30);
bool cmp(int a,int b)
{
	int t1=a,t2=b;
	int pow2=pow1;
	while(pow2>0)
	{
		if((t1&pow2) > (t2&pow2))
			return 1;
		else
			pow2/=2;
	}
	return 0;
}
int main()
{
	ios::sync_with_stdio(false);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	int ans=a[1];
	for(int i=2;i<=m;i++)
	{
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}
