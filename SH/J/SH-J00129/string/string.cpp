#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll suma=0, n, ans=0, a[200010];
char c[200010];
struct node {
	ll L, R;
	char val;
	bool operator<(const node& other) const {
		return R > other.L;
	}
};
vector<node> v;

int LB(ll tL) {
	int L = 0, R = n - 1;
	while (L < R) {
		int mid = (L + R) / 2;
		if (v[mid].R < tL) L = mid + 1;
		else R = mid;
	}
	return L;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i] >> c[i];
		suma += a[i];
	}
	ll mid = (suma+1) / 2, last=0;
	for (int i=0; i<n; i++) {
		ll L = last + 1, R = last + a[i];
		if (L <= mid && R >= mid) {
			n++;
			v.push_back(node{L, mid, c[i]});
			if (R > mid) v.push_back(node{mid+1, R, c[i]});
		} 
		else {
			v.push_back(node{L, R, c[i]});
		}
		last = R;
	}
	
	
	for (const node& i : v) {
		if (i.R > mid) break;
		//printf("working [%lld,%lld]\n", i.L, i.R);
		ll tR = suma + 1 - i.L;
		ll tL = suma + 1 - i.R;
		//printf("to find [%lld,%lld]\n", tL, tR); 
		
		int lb = LB(tL);
		
		while (v[lb].L <= tR) {
			ll len = (min(v[lb].R, tR) - max(v[lb].L, tL) + 1);
			//printf("found [%lld,%lld] lb=%d len=%lld\n", v[lb].L, v[lb].R, lb, len);
			if (v[lb].val != i.val) ans += len;
			lb++;
			if (lb == n) break;
		} 
	}
	
	cout << ans;
	
	return 0;
}
