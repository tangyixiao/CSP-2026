#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int (i)=(a);(i)<=(b);(i)++)
#define REP(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
typedef long long ll;

ll n,ans=0;
struct _STR
{
	char ch;
	ll a;
} str[200009];

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	FOR(i,1,n) scanf("%lld %c",&str[i].a,&str[i].ch);
	ll i=1,j=n;
	while(i<=j)
	{
		ll mn=min(str[i].a,str[j].a);
		if(str[i].ch!=str[j].ch) ans+=mn;
		if(mn==str[i].a) i++;
		else str[i].a-=mn;
		if(mn==str[j].a) j--;
		else str[j].a-=mn;
	} 
	printf("%lld\n",ans);
	return 0;
}

// 100pts
