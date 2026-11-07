#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 0x3f3f3f3f3f3f3f3f;
int n, m, a[1000005];
void Solve(int Case){
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	int ans = 0;
	for(int i = 30; i >= 0; i --){
		int tot = 0;
		for(int j = 1; j <= n; j ++){
			if((a[j] & (ans | (1LL << i))) == (ans | (1LL << i))){
				tot ++;
			}
		}
		if(tot >= m) ans |= (1LL << i);
	}
	cout << ans;
}
signed main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	// cin >> t;
	for(int i = 1; i <= t; i ++){
		Solve(i);
	}
	return 0;
}
