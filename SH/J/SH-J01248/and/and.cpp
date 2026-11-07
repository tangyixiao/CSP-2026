#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100000001],a1[100000001],cnt;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n;i>1;i--)
	{
		long long ans=a[i];
		for(int j=1;j<m;j++)
		{
			ans=(ans&a[i-j]);
		}
		cnt=max(cnt,ans);
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
