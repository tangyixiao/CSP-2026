#include<bits/stdc++.h>
using namespace std;

int const N = 2E5 + 5;
int a[N], n, m;
vector<int> v;

int count(int b) {
	int cnt = 0;
	for(int i = 1; i <= n; i++) {
		if(a[i] & b) cnt++;
		a[i] &= (b - 1);
	}
	return cnt;
}

bool cmp(int a, int b) {
	return a > b;
}

int solve() {
	int ans = 0;
	for(int i = 30; i >= 0; i--) {
		int b = 1 << i;
		sort(a + 1, a + 1 + n, cmp);
		int cnt = count(b);
		if(cnt >= m) n = cnt, ans += b;
//		cout << n << endl;
	}
	return ans;
}

int main(){
	freopen("and.in","r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	
	cout << solve();
	return 0;
}

