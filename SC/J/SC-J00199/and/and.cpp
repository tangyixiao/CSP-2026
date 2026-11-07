#include <set>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define int ll
#define fi first
#define se second
#define pii pair<ll , ll>
#define mk make_pair
using namespace std;
const int N = 2e5 + 10 , M = 50;
ll n , m , k , ans;
bool at[N] , a[N][M];
bool check(ll j){
	ll num = 0;
	for (int i = 1;i <= n;i ++)
		if (!at[i] && a[i][j]) num ++;
	return (num >= k);
}
signed main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	m = 31;
	for (int i = 1 , x;i <= n;i ++){
		cin >> x;
		ll j = 0;
		while (x){
			a[i][j] = (x % 2);
			x /= 2;
			j ++;
		}
	}
	for (int j = m;j >= 0;j --){
		if (check(j)){
			ans += (1ll << j);
			for (int i = 1;i <= n;i ++)
				if (!a[i][j]) at[i] = 1;
		}
	}
	cout << ans << "\n";
	return 0;
}
/*
4 2
3 15 12 12
*/