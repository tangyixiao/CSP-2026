#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
long long a[N];
long long ans;
int n, m;
void dfs(int x, int cnt, long long now) {
	if(x > n) return;
	if(cnt == m)  {
		ans = max(ans, now);
		return;
	}
	dfs(x + 1, cnt, now);
	dfs(x + 1, cnt + 1, now & a[x]);
}
int main() {
	int rp;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	rp++;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if(n > 2e4){
		stable_sort(a + 1, a + n + 1);
		cout << a[n - m + 1];
	}if(m == 1) {
		stable_sort(a + 1, a + n + 1);
		cout << a[n];
	} else if(m == 2) {
		for(int i = 1; i <= n; i++) {
			for(int j = i + 1; j <= n; j++) {
				ans = max(ans, (a[i] & a[j]));
			}
		}
		cout << ans << endl;
	} else if(m == n) {
		ans = a[1];
		for(int i = 2; i <= n; i++) {
			ans &= a[i];
		}
		cout << ans << endl;
	} else if(m <= n) {
		dfs(1, 0, 1048575);
		cout << ans << endl;
	}
	return 0;
}
/*

00000000000000000011
00000000000000001111
00000000000000001100
00000000000000001100

*/