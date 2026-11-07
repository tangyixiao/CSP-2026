#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll maxn = 1e5 * 2 + 10;
ll n, ab, bb, k, ans;

bool fffff = 1;

struct blck{
	ll a, b;
	char c;
}a[maxn];

char checka(ll k){
	bool flag = 0;
	int i = ab;
	while(!flag){
		if(a[i].a <= k && a[i].b >= k){
			flag = 1;
			break;
		}
		i += 1;
		ab = i;
	}
//	printf("%d %d %c\n", k, i, a[i].c);
	return a[i].c;
}

char checkb(ll k){
	bool flag = 0;
	int i = bb;
	while(!flag){
		if(a[i].a <= k && a[i].b >= k){
			flag = 1;
			break;
		}
		i -= 1;
		bb = i;
	}
//	printf("%d %d %c\n", k, i, a[i].c);
	return a[i].c;
}

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	ab = 1;
	bb = n;
	for(ll i = 1; i <= n; i++){
		ll tmp;
		char ttmp;
		cin >> tmp >> ttmp;
		a[i].a = k + 1;
		a[i].b = k + tmp;
		a[i].c = ttmp;
		k += tmp;
		if(tmp != a[1].b - a[1].a + 1) fffff = 0;
//		printf("::%d %d %c", a[i].a, a[i].b, a[i].c);
	}
	if(fffff){
		for(ll i = 1; i <= n / 2; i++){
			if(a[i].c != a[n + 1 - i].c) ans += 1;
		}
		printf("%lld\n", ans * (a[1].b - a[1].a + 1));
		return 0;
	}
	for(ll i = 1; i <= k / 2; i++){
		if(checka(i) != checkb(k + 1 - i)) ans += 1;
	}
	printf("%lld\n", ans);
	return 0;
} 
