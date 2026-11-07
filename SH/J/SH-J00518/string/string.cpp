#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int a[200005];
char c[200005];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr); 
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) 
	{
		cin>>a[i];
		cin>>c[i];
	}
	int pos=n;
	int ans=0;
	for (int i=1;i<=n;i++)
	{
		while (i!=pos && a[i]>=0)
		{
			int p=min(a[i],a[pos]);
			a[i]-=p;
			a[pos]-=p;
			if (c[i]!=c[pos])	ans+=p;
			if (a[pos]==0)	pos--;
			else	break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
	

