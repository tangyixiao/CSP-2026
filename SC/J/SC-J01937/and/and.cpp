#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,m,ans;
bitset<N> a[35],tmp;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1,now;i<=n;++i)
	{
		cin>>now;
		for(int j=0;now;++j,now>>=1)
			if(now&1)
				a[j].set(i);
		tmp.set(i);
	}
	for(int i=30;~i;--i)
	{
		a[i]&=tmp;
		if(a[i].count()>=m)
		{
			ans|=(1<<i);
			tmp&=a[i];
		}
	}
	cout<<ans<<"\n";
	return 0;
}