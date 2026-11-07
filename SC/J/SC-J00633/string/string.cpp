#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 20;
int n, a[N], sum, ll[N], rr[N], ans;
char c[N];

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		sum += a[i];
		ll[i] = rr[i - 1] + 1;
		rr[i] = ll[i] + a[i] - 1;
	}
	int l = 1, r = n, nowl = 1, nowr = sum;
	while(l < r){
		int lenl = rr[l] - nowl + 1, lenr = nowr - ll[r] + 1;
		if(c[l] != c[r]) ans += min(lenl, lenr);
		nowl += min(lenl, lenr);
		nowr -= min(lenl, lenr);
		if(nowl > rr[l]) l ++;
		if(nowr < ll[r]) r --;
	}
	cout << ans;
	return 0;
}