#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+7;
int b[N];
vector<int> a(N);
int count1(int a) {
	ll ans;
	while(a) {
		a = a & (a - 1);
		ans ++;
	}
	return ans;
}
bool cmp(ll x, ll y){
	if(b[x] == b[y]) {
		return x > y;
	}
	return b[x] > b[y];
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(ll i=0; i<n; i++) {
		cin >> a[i];
		b[a[i]] = count1(a[i]);
	}
	sort(a.begin(), a.end(), cmp);
	int ans;
	ans = a[0];
	for(ll i=1; i<m; i++) {
		ans = ans & a[i];
	}
	cout << ans;
	return 0;
}
