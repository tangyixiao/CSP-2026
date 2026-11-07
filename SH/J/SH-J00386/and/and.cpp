#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1000005;
int n,m;
int a[N],b[N];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>n>>m; for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int ans=0;
	for(int i=30;i>=0;i--)
	{
		b[0]=0;
		for(int j=1;j<=n;j++)
			if((a[j]>>i)&1)
				b[++b[0]]=a[j];
//		if(b[0]) cerr<<i<<' '<<b[0]<<'\n';
		if(b[0]>=m)
		{
			for(int i=1;i<=b[0];i++) a[i]=b[i];
			n=b[0]; ans+=1<<i;
		}
	}
	cout<<ans;
	return 0;
}

