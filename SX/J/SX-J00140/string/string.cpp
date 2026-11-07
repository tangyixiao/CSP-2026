#include <bits/stdc++.h>
using namespace std;
long long n,a[200005],ax,ans;
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ax=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(i==ax) break;
		if(c[i]!=c[ax]) ans+=min(a[i],a[ax]);
		if(a[i]<a[ax]) a[ax]-=a[i];
		else if(a[i]>a[ax]) 
		{
			a[i]-=a[ax];
			ax--;
			i--;
		}
		else ax--;
		if(i==ax) break;
	}
	cout<<ans;
	return 0;
}
