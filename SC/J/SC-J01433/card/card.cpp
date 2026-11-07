#include <bits/stdc++.h>
using namespace std;
int t[300005], n, m, a[500005], tot;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		tot++;
		t[a[i]] += tot;
	}
	for(int i = 1; i <= m; i++) cout << a[i] <<' ';
	return 0;
}
