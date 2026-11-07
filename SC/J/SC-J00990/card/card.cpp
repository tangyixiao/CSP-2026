#include<bits/stdc++.h>//48+
#define int long long
#define mod 998244353
using namespace std;

int n,m,last,a[500001],k[500001],z[500001],mp[500001],ans[500001];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=n;i>=1;--i)
	{
		z[i]=k[a[i]];
		k[a[i]]=max(k[a[i]],i);
	}
	for(int i=1;i<=n;++i)
	{
		last=i;
		for(int j=1;j<=m;++j) mp[j]=0;
		while(last<=n)
		{
			while(1)
			{
				if(z[last]==0) break;
				last=z[last];
			}
			mp[a[last]]=1;
			++last;
		}
		for(int j=1;j<=m;++j) ans[j]+=mp[j];
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<" "; 
	return 0;
}





/*

挂上迷惑行为大赏并且删掉正文代码谢谢 
请关注 cath20 喵~
luogu uid：931919 
 

*/







