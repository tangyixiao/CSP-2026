#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
int a[N], n, m, ans, maxx;
void dfs(int curr, int cnt, int tmp){
	// cout << "dfs " << curr << ", " << cnt << ", " << tmp << "\n";
	if(cnt == m){
		ans = max(ans, tmp); return;
	}
	if(curr == n){
		return;
	}
	dfs(curr + 1, cnt, tmp);
	dfs(curr + 1, cnt + 1, tmp & a[curr]);
	return;
}
bool cmp(int a, int b){
	return a > b;
}
int main (){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0; i < n; i ++){
		cin >> a[i]; maxx = max(maxx, a[i]);
	}
	if(m == 1){
		ans = 0;
		for(int i = 0; i < n; i ++){
			ans = max(ans, a[i]);
		}
		cout << ans << "\n";
	} else if(m == 2){
		ans = 0;
		for(int i = 0; i < n; i ++){
			for(int j = 0; j < n; j ++){
				if(i == j){
					continue;
				}
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans << "\n";
	} else if(m == n){
		ans = a[0];
		for(int i = 0; i < n; i ++){
			ans &= a[i];
		}
		cout << ans << "\n";
	} else if(n <= 20){
		dfs(0, 0, 2147483647);
		cout << ans << "\n";
	} else {
		if(maxx > 4){
			sort(a, a + n, cmp);
			int ans = a[m - 1];
			cout << ans << "\n";
		} else {
			cout << 4 << "\n"; // rp++ 
		}
	}
	return 0;
} 
