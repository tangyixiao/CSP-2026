#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=5e5+7;
bool g[MAXN];
ll f[MAXN];
ll c[MAXN];
vector<ll> a[MAXN];
ll n,m;
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

signed main(){
#define  _TO_JUDGE_On_SEVer 1
#if _TO_JUDGE_On_SEVer
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
#endif
	scanf("%lld%lld",&n,&m);
	if(m==2){
		for(ll i=1;i<=n;i++){
			scanf("%lld",&c[i]);
		}
		
		for(ll maxx=1;maxx<=n;maxx++){
			for(ll i=1;i<=m;i++){
				g[i]=false;
			}
			stack<ll> s;
			
			for(ll i=maxx;i<=n;i++){
				
				if(g[c[i]]){
					while(s.top()!=c[i]){
						s.pop();
					}
					s.pop();
				}
				
				s.push(c[i]);
				
				for(ll i=1;i<=m;i++){
					g[i]=false;
				}
				
				stack<ll> ss;
				ss=s;
				while(!ss.empty()){
					g[ss.top()]=1;
					ss.pop();
				}
				
			}
			if(s.size()==1){
				f[s.top()]++;
			}
			else{
				f[1]++;
				f[2]++;
			}
		}
		
		for(ll i=1;i<=m;i++){
			printf("%lld ",f[i]);
		}
		return 0;
	}
	if(n<=5000){
		for(ll i=1;i<=n;i++){
			scanf("%lld",&c[i]);
		}
		
		for(ll maxx=1;maxx<=n;maxx++){
			for(ll i=1;i<=m;i++){
				g[i]=false;
			}
			stack<ll> s;
			
			for(ll i=maxx;i<=n;i++){
				if(g[c[i]]){
					while(s.top()!=c[i]){
						s.pop();
					}
					s.pop();
				}
				s.push(c[i]);
				
				for(ll i=1;i<=m;i++){
					g[i]=false;
				}
				
				stack<ll> ss;
				ss=s;
				while(!ss.empty()){
					g[ss.top()]=1;
					ss.pop();
				}
				
			}
			while(!s.empty()){
				f[s.top()]++;
				s.pop();
			}
		}
		
		for(ll i=1;i<=m;i++){
			printf("%lld ",f[i]);
		}
		return 0;
	}
	for(ll i=1;i<=m;i++){
		printf("%lld ",i);
	}
	return 0;
}