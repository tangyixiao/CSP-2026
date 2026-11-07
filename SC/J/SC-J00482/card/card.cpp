#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll LEN_N = 5e5+10, LEN_M = 3e5+10;
ll N, M, W[LEN_N], P[LEN_N], E[LEN_M], ans[LEN_M];
bool flag[LEN_N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%lld %lld", &N, &M);
	for(ll i = 1; i <= N; i++){
		scanf("%lld", &W[i]);
		E[W[i]] = i;
	} for(ll i = 1; i <= N; i++)
		P[i] = E[W[i]];
	for(ll i = 1; i <= N; i++){
		for(ll j = i; j <= N; j++){
			ans[W[j]]++;
			j = P[j]; 
		}
	} for(ll i = 1; i <= M; i++)
		printf("%lld ", ans[i]);
	return 0;
}