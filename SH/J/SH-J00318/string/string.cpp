#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e6+10;
int n,a[N],pre[N],suf[N];
char c[N];
namespace smp
{
	void solve()
	{
		string s="";
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=a[i];j++)
			{
				s+=c[i];
			}
		}
		int m=s.size();
		s=' '+s;
		int ans=0;
		for(int i=1;i*2<=m;i++)
		{
			if(s[i]!=s[m-i+1])
			{
				ans++;
			}
		}
		cout<<ans;
	}
}
namespace all
{
	void solve()
	{
		int m=pre[n],ans=0;
		for(int i=1,j=m;i<j;i++,j--)
		{
			int in=lower_bound(pre+1,pre+n+1,i)-pre;
			int jn=lower_bound(pre+1,pre+n+1,j)-pre;
			int len=min(j-pre[jn-1]-1,pre[in]-i);
			if(c[in]!=c[jn]) ans+=len+1;
			i+=len;
			j-=len;
		}
		cout<<ans;
	}
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	#endif
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i];
	for(int i=n;i>=1;i--) suf[i]=suf[i+1]+a[i];
	if(pre[n]<=1e6) smp::solve();
	else all::solve();
	return 0;
}

