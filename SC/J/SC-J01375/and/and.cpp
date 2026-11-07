#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=2e5+7;
ll n,m,cur,ans;
ll aa[MAXN];
ll p[33];
vector<ll> a[33]; 
/**
 * 打开评测开关！
 * 打开评测开关！
 * 打开评测开关！
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 * 打开评测开关
 */
inline ll get_bin_code(ll x){
	//string s="";
	ll val=0;
	while(x){
		val++;
		//char ch=((x&1)+'0');
//		s=ch+s;
		x-=x&1;
		x/=2;
	}
	return val;
}
signed main(){
#define  _TO_JUDGE_On_SEVer 1
#if _TO_JUDGE_On_SEVer
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
#endif
	scanf("%lld%lld",&n,&m);
	if(n==m){
		scanf("%lld",&ans);
		for(ll i=1;i<n;i++){
			ll s;
			scanf("%lld",&s);
			ans&=s;
		}
		printf("%lld",ans);
		return 0;
	}	
	if(m==1){
		for(ll i=1;i<=n;i++){
			ll s;
			scanf("%lld",&s);
			ans=max(ans,s);
		}
		printf("%lld",ans);
		return 0;
	}
	if(n==m+1&&n<=2000){
		for(ll i=1;i<=n;i++){
			scanf("%lld",&aa[i]);
		}
		for(ll i=1;i<=n;i++){
			for(ll j=1;j<=n;j++){
				ans=max(ans,aa[i]&aa[j]);
			}
		}
		printf("%lld",ans);
		return 0;
	}
	for(ll i=1;i<=n;i++){
		ll inz;
		scanf("%lld",&inz);
		aa[i]=inz;
		cur=get_bin_code(inz);
		p[cur]++;
		a[cur].push_back(inz);
	}
	cur=-1;
	ll maxx=0;
	for(ll i=32;i>=1;i--){
		maxx=max(maxx,p[i]);
		if(p[i]>=m){
			cur=i;
			break;
		}
	}
	if(cur==-1){
		sort(aa+1,aa+n+1,greater<ll>());
		ans=aa[1];
		for(ll i=2;i<=m;i++){
			ans&=aa[i];
		}
		printf("%lld",ans);
		return 0;
	}
	sort(a[cur].begin(),a[cur].end(),greater<ll>());
	ans=a[cur][0];
	for(ll i=1;i<m;i++){
		ans&=a[cur][i];
	}
	printf("%lld",ans);
	return 0;
}