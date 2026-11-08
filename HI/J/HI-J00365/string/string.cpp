#include<bits/stdc++.h>
using namespace std;
#define int long long

int const N = 2E5 + 5;
int n, a[N], ans = 0, l, r;
char c[N];

void update() {
	if(a[l] > a[r]) {
		a[l] -= a[r];
		r--;
	}else if(a[l] == a[r]) r--, l++;
	else {
		a[r] -= a[l];
		l++;
	}
}

signed main(){
	freopen("string.in","r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	l = 1, r = n;
	while(l < r) {
		if(c[r] != c[l]) ans += min(a[r], a[l]);
//		cout << c[r] << " " << c[l];
		update();
	}
	cout << ans;
	return 0;
}

