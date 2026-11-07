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
const int N = 2e5 + 10;
ll n , m , sum;
struct node{
	ll x , num;
}a[N];
ll nup(char c){ return c - 'a' + 1;}
signed main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	char c;
	for (int i = 1 , x;i <= n;i ++){
		cin >> x >> c;
		if (nup(c) != a[m].x) a[++m] = {nup(c) , x};
		else a[m].num += x;
		sum += x;
	}
	n = m;
	ll l = 1 , r = m , ans = 0;
	while (l < r){
		if (a[l].x == a[r].x){
			if (a[l].num == a[r].num) l ++ , r --;
			else if (a[l].num > a[r].num) a[l].num -= a[r].num , r --;
			else a[r].num -= a[l].num , l ++;
		}
		else {
			if (a[l].num == a[r].num) ans += a[l].num , l ++ , r --;
			else if (a[l].num > a[r].num) ans += a[r].num , a[l].num -= a[r].num , r --;
			else ans += a[l].num , a[r].num -= a[l].num , l ++;
		}
	}
	cout << ans << "\n";
	return 0;
}
/*
02 01A 02 01B
*/