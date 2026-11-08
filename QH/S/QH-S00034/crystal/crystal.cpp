#include<bits/stdc++.h>
using namespace std;

const int N = 501000;
typedef long long ll;
ll n, m, a[N], s[N], p[N], h[N];

ll f(int l, int r){
	return (r - l + 1) * 1LL * s[r] - (p[r - 1] - p[l - 2]);
}

int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	for(int i = 1; i <= n; i++)
		scanf("%lld", &a[i]);	
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n; i++)
		s[i] = a[i] - a[1];
	for(int i = 1; i <= n; i++){
		p[i] = s[i] + p[i - 1];
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		int l = 1, r = i;
		while(l + 1 < r){
			int md = (l + r) / 2;
			if(f(md, i) > m) l = md;
			else r = md;
		}
		ans = max(ans, i - l + 1);
	}
	printf("%d", ans);
	return 0;
}
