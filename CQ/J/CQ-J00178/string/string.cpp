#include<bits/stdc++.h>
using namespace std;
namespace did
{
	#define int long long
	int n,a[200005];
	int s[200005],h[200005];
	char c[200005];
	signed main()
	{
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
		for(int i=n;i>=0;i--) h[i]=h[i+1]+a[i];
		for(int i=1;i<=n;i++) s[i]=s[i-1]+a[i];
		int x;
		for(x=1;x<=n;x++)
			if(s[x]>=s[n]-s[x])break;
		int r=n;
		int ns=0,ans=0;
		for(int i=1;i<=n;i++)
		{
			if(i==x)
			{
				if(r!=x) ans+=h[r]-ns;
				for(int j=r-1;j>x;j--) if(c[j]!=c[x]) ans+=a[j];
				break;
			}
			while(h[r]<=s[i]&&r)
			{
				int d=h[r]-ns;
				if(c[r]!=c[i]) ans+=d;
				ns=h[r];
				r--;
			}
			if(ns!=s[i]&&c[r]!=c[i])ans+=s[i]-ns,ns=s[i];
		}
		cout<<ans;
		return 0;
	}
}
signed main()
{
	did:main();
	return 0;
}
/*
O(n),0
*/
