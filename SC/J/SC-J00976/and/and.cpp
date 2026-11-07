#include<bits/stdc++.h>
#define N 5050000
#define M 2020
#define ll long long
using namespace std;
ll n, m, a[N], maxx = -1;
ll f1(ll x){
	ll b[20], k = 0, ans = 0, sum = 1;
	while ( x > 0 ){
		k++;
		b[k] = x % 2;
		if ( x % 2 == 1 ){
			x--;
		}
		x /= 2;
	}
	for ( int i = k; i >= 1; i-- ){
		ans += b[i] * sum;
		sum *= 10;
	}
	return ans;
}
ll f2(ll x, ll y){
	ll a1 = f1(x), a2 = f1(y), c[20], k = 0, ans = 0, sum = 1;
	ll ma = max(a1, a2);
	while ( ma > 0 ){
		k++;
		if ( a1 % 10 == a2 % 10 ){
			c[k] = 1;
		}else{
			c[k] = 0;
		}
		a1 /= 10;
		a2 /= 10;
		ma = max(a1, a2);
	}
	bool flag = 1;
	for ( int i = k; i >= 1; i++ ){
		if ( c[i] == 0 && flag == 1 ){
			continue;
		}
		flag = 0;
		ans += c[i] * sum;
		sum *= 10;
	}
	ll ans1 = 0, sum1 = 1;
	while ( ans > 0 ){
		ans1 += (ans % 10) * sum1;
		ans /= 10;
		sum1 *= 2;
	}
	return ans1;
}
int main(){
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for ( int i = 1; i <= n; i++ ){
		cin >> a[i];
		maxx = max(maxx, a[i]);
	}
	if ( m == 1 ){
		cout << maxx;
		return 0;
	}
	if ( m == n ){
		for ( int i = 2; i <= n; i++ ){
			a[i] = f2(a[i], a[i-1]);
		}
		cout << a[n];
		return 0;
	}
	ll maxxx = -1;
	if ( m == 2 ){
		for ( int i = 1; i <= n; i++ ){
			for ( int j = i+1; j <= n; j++ ){
				maxxx = max ( maxxx, f2(a[i], a[j]));
			}
		}
		cout << maxxx;
		return 0;
	}
	return 0;
}