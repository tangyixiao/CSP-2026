#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans = 0;
ll a[400005];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		if (i == 1)ans = a[1];
		ans = ans & a[i];
	}
	cout << ans;
    return 0;
}
