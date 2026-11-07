#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int (i)=(a);(i)<=(b);(i)++)
#define REP(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
typedef long long ll;

ll n,m,a[500009],lst[300009],ans[300009];

inline ll max(ll a,ll b) {return (a>b)?a:b;}

signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	FOR(i,1,n) scanf("%lld",&a[i]);
	memset(lst,-127,sizeof lst);
	REP(j,n,1)
	{
		lst[a[j]]=max(lst[a[j]],(ll)j);
		ll i=j;
		while(i<=n)
		{
			ans[a[i]]++;
			i=lst[a[i]]+1;
		}
	}
	FOR(i,1,m) printf("%lld ",ans[i]);
	printf("\n");
	return 0;
}

// 48~100pts
// 实测能过到 88pts QAQ
