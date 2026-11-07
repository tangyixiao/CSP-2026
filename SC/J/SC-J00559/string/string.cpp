#include<cstdio>
#include<algorithm>
typedef long long ll;
const ll N=2e6+5;
ll n;
ll a1[N];
char c1[N][3];
ll a2[N];
char c2[N][3];
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(ll i=1;i<=n;++i){
		scanf("%lld%s", &a1[i], c1[i]);
		a2[n-i+1]=a1[i],c2[n-i+1][0]=c1[i][0];
	}for(ll i=1,j=1;i<=n||j<=n;){
		if(i<=n&&!a1[i]) ++i;
		if(j<=n&&!a2[j]) ++j;
		ll mn=std::min(a1[i],a2[j]);
		if(*c1[i]!=*c2[j]) ans+=mn;
		a1[i]-=mn,a2[j]-=mn;
	}printf("%lld\n", (ans>>1));
	return 0;
}