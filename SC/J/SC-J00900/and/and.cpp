#include <bits/stdc++.h>

using namespace std;

bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k,ans;
	cin>>n>>k;
	long long a[200050];
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=1;i<=k;i++)
	{
		ans=ans & a[i];
	}
	cout<<ans;
	return 0;
}