#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, m, a[500010], c[300010], q[300010];

signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++ i){
		cin >> a[i];
		q[a[i]] = i;
	}
	for(int x = 1; x <= n; ++ x){
		for(int i = x; i <= n; ++ i){
			c[a[i]] ++;
			i = q[a[i]];
		}
	}
	for(int i = 1; i <= m; ++ i)
		cout << c[i] << " ";
}

