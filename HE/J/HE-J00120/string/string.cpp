#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 201000;
int n, a[N];
char c[N];
ll pre[N], suf[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	ll r = 0;
	int posl = 1, posr = n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		r += a[i];
		pre[i] = pre[i - 1] + a[i];
	}
	for(int i = n; i; i--)
		suf[i] = suf[i + 1] + a[i];
	ll ans = 0;
	for(int i = 1, j = n; i < j; i++){
		while(i < j && pre[n] - r + r - pre[j - 1] <= pre[i]){
			if(c[j] != c[i])
				ans += r - pre[j - 1];
			r -= r - pre[j - 1];
			--j;
		}
		if(pre[n] - r < pre[i]){
			if(c[j] != c[i])
				ans += pre[i] - (pre[n] - r);
			r -= pre[i] - (pre[n] - r);
		}
	}
	cout << ans << '\n';
	return 0; 
}
