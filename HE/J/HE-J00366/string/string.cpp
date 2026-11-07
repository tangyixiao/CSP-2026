#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;

const int N = 2e5 + 10;

struct Node{ll cnt; char c;}a[N];
ll n, ans;

int main(){
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (ll i = 1; i <= n; i ++) cin >> a[i].cnt >> a[i].c;
	ll l = 1, r = n;
	while (!(l >= r)){
		ll ln = a[l].c, rn = a[r].c;
		if (ln != rn) ans += min(a[l].cnt, a[r].cnt);
		if (a[l].cnt > a[r].cnt) a[l].cnt -= a[r].cnt, r --;
		else if (a[l].cnt == a[r].cnt) r --, l ++;
		else a[r].cnt -= a[l].cnt, l ++;
	}
	cout << ans;
	
	return 0; 
}
