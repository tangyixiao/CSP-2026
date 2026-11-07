#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+10;
int n,m,a[maxn],cnt,s[maxn],smx,ans=2147483647;
bool b[maxn][35],f[maxn];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	cin>>n>>m,cnt=n;
	for(int i=1;i<=n;i++)cin>>a[i],f[i]=1;
	for(int i=1;i<=n;i++)
	{
		int t=a[i];
		while(t)
		{
			b[i][++s[i]]=t%2;
			t>>=1;
		}
		smx=max(smx,s[i]);
	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=smx;j>0;j--)cout<<b[i][j];
//		cout<<endl;
//	}
	int p=smx,sum=0;
//	for(p=smx;p>0&&sum<m;p--)
//	{
//		sum=0;
//		for(int i=1;i<=n;i++)sum+=b[i][p];
//	}
//	p++;
	for(;p>0;p--)
	{
		sum=0;
		for(int i=1;i<=n;i++)sum+=f[i]*b[i][p];
//		cout<<sum<<endl;
		if(sum>=m)
			for(int i=1;i<=n;i++)
			{
				cnt-=f[i]*(!b[i][p]);
				if(!b[i][p])f[i]=0;
			}
		if(cnt==m)
		{
			for(int i=1;i<=n;i++)
				if(f[i])
					ans&=a[i];
			cout<<ans;
			return 0;
		}
	}
//	for(int i=1;i<=n;i++)cout<<f[i];cout<<endl;
	sum=0;
	for(int i=1;i<=n&&sum<=m;i++)
		if(f[i])
			ans&=a[i],sum++;
	cout<<ans;
	return 0;
}
