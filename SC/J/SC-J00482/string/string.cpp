#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll LEN = 2e5+10;
struct node{
	char c;
	ll num;
} W[LEN];
ll N, ct;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &N);
	for(ll i = 0 ; i < N; i++)
		scanf("%lld %c", &W[i].num, &W[i].c);
	for(ll i = 0, j = N-1; i <= j;){
		if(W[i].c == W[j].c){
			if(W[i].num > W[j].num){
				W[i].num -= W[j].num;
				j--;
			} else if(W[i].num < W[j].num){
				W[j].num -= W[i].num;
				i++;
			} else{
				i++; j--;
			}
		} else{
			if(W[i].num > W[j].num){
				ct += W[j].num;
				W[i].num -= W[j].num;
				j--;
			} else if(W[i].num < W[j].num){
				ct += W[i].num;
				W[j].num -= W[i].num;
				i++;
			} else{
				ct += W[i].num;
				i++; j--;
			}
		}
	} printf("%lld", ct);
	return 0;
}