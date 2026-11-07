#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,sum,maxx=-0x3f3f3f;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++){
			ans=a[i]&a[j];
			ans=max(maxx,ans);
		} 
	}
	cout<<ans;
	return 0;
}
