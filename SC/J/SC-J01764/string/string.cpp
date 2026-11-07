#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 0x3f3f3f3f3f3f3f3f;
int n, a[1000005];
char c[1000005];
void Solve(int Case){
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> a[i] >> c[i];
	} c[0] = c[n + 1] = '?';
	int ans = 0, l = 0, r = n + 1, suml = 0, sumr = 0, more = 0;
	while(l != r){
		if(suml < sumr){
			l ++; suml += a[l];
			if(c[l] != c[r]){
				ans += min(more, a[l]);
			}
		}
		else{
			r --; sumr += a[r];
			if(c[l] != c[r]){
				ans += min(more, a[r]);
			}
		}
		more = abs(suml - sumr);
	}
	cout << ans;
}
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	// cin >> t;
	for(int i = 1; i <= t; i ++){
		Solve(i);
	}
	return 0;
}
