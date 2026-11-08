#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e6 + 10;
ll n, ans;
ll a[N];
char b[N];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) cin >> a[i] >> b[i];
	for (ll i = 1, j = n; i < j;){
		if (b[i] != b[j]) ans += min(a[i], a[j]);
		if (a[i] < a[j]) a[j] -= a[i++];
		else a[i] -= a[j--];
	}
	cout << ans;
	return 0;
}
