#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[500000 + 50], b[300000 + 50];
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "r", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		b[a[i]] = i;
	}
	for(int i = 1; i <= m; i++){
		cout << b[i] << " ";
	}
	return 0;
}
