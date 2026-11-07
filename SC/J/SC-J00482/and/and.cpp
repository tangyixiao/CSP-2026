#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll LEN = 2e5+10;
ll ans, maxx, N, M, W[LEN];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld %lld", &N, &M);
	for(ll i = 0; i < N; i++){
		scanf("%lld", &W[i]);
		maxx = max(W[i], maxx);
	} for(ll i = 1<<30; i > 0; i >>= 1){
		if(i > maxx) continue;
		ll ct = 0;
		for(ll j = 0; j < N; j++){
			if(W[j] == -1) continue;
			if((W[j]/i)%2 == 1) ct++;
		}
		if(ct >= M){
			for(ll j = 0; j < N; j++)
				if((W[j]/i)%2 == 0)
					W[j] = -1;
			ans += i;
		}
	} printf("%lld", ans);
	return 0;
}