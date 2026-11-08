#include<bits/stdc++.h>
using namespace std;

int const N = 2E5 + 5;
int n, m, a[N], tb[N], cnt[N];

void play(int st) {
	int x = 0;
	for(int i = st; i <= n; i++) {
		x++;
		for(int j = 1; j < x; j++) if(tb[j] == a[i]) x = j;
		tb[x] = a[i]; 
	}
	for(int i = 1; i <= x; i++) cnt[tb[i]]++;
}

void solve() {
	for(int i = 1; i <= n; i++) play(i);
	for(int i = 1; i <= m; i++) cout << cnt[i] << " ";
}

int lst[N];

void solve2() {
	for(int i = 1; i <= n; i++) lst[a[i]] = i;
	for(int i = 1; i <= m; i++) cout << lst[a[i]] << " ";
}

int main(){
	freopen("card.in","r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	if(n <= 500) solve();
	else if(n <= 2e5) solve2();
//	solve2();
	return 0;
}

