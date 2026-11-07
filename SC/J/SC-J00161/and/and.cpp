#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	int a[200001], maxx = 0, allin;
	cin >> n >> m;
	cin >> a[1];
	maxx = allin = a[1];
	for(int i = 2; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
		allin = allin & a[i];
	}
	if(m == 1) {
		cout << maxx;
	}
	if(m == n){
		cout << allin;
	}
	
	return 0;
}