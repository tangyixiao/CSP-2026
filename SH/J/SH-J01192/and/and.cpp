#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int (i)=(a);(i)<=(b);(i)++)
#define REP(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
typedef long long ll;

ll n,m,ans=0,a[200009];
vector<ll> vec,tmp;

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	FOR(i,1,n) scanf("%lld",&a[i]), vec.push_back((ll)i);
	REP(j,29,0)
	{
		ll pw=1<<j,cnt=0;
		tmp.clear();
		for(ll i:vec) if(a[i]&pw) cnt++, tmp.push_back(i);
		if(cnt>=m)
		{
			ans+=pw, vec.clear();
			for(ll x:tmp) vec.push_back(x);
		}
	}
	printf("%lld\n",ans);
	return 0;
}

// 100pts
