#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],ans;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort (a,a+n);
	ans=a[n-1];
	for (int i=2;i<=m;i++)
	{
		ans=a[n-2]&ans;
	}
	if (ans==0)
	{
		while(ans==0)
		{
			int i=n-m;
			ans=max(a[i]&a[i-1],ans);
			i--;
		}
	}
	cout<<ans;
	
	return 0;
}
