#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a1[N], b[N], a[N], n, m, ans = -1, maxx = -1;
void print(){
	int sum = a[a1[1]];
	for(int i = 2; i <= m; ++i) sum &= a[a1[i]];
	ans = max(ans, sum);
}
void dfs(int t){
	if(t > m) {print(); return;}
	for(int i = a1[t - 1] + 1; i <= n; ++i){
		if(!b[i]){
			b[i] = 1;
			a1[t] = i;
			dfs(t + 1);
			b[i] = 0;
		}
	}
}
bool cmp(int a, int b) {return a > b;}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	memset(b, 0, sizeof b);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) {cin >> a[i]; maxx = max(maxx, a[i]);}
	if(n <= 20){
		dfs(1); cout << ans; return 0;
	}
	else if(n > 20 && n <= 2000){
		if(m == 1){cout << maxx; return 0;}
		else if(m == n){
			int x = a[1];
			for(int i = 2; i <= n; ++i) x &= a[i];
			cout << x;
			return 0;
		}
		else if(m == 2){
			int w = -1;
			for(int i = 1; i < n; ++i){
				int k = a[i];
				for(int j = i + 1; j <= n; ++j){
					k &= a[j];
					w = max(w, k);
				} 
			}
			cout << w;
		}
	}
	else{
		sort(a + 1, a + n + 1, cmp);
		int v = a[1];
		for(int i = 2; i <= m; ++i) v &= a[i];
		cout << v;
		return 0;
	}
	return 0;
}
