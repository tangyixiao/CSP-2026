#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500010];
int b[500010];
int p[300010];
int cnt[300010];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++){
		int sz = 0;
		memset(p, 0, sizeof p);
		memset(b, 0, sizeof b);
		for (int j = i; j <= n; j++){
			if (p[a[j]] == 0){
				p[a[j]] = ++sz;
				b[sz] = a[j];
			}else{
				int t = sz;
				sz = p[a[j]]-1;
				for (int k = sz+1; k <= t; k++){
					p[b[k]] = 0;
					b[k] = 0;
				}
				p[a[j]] = ++sz;
				b[sz] = a[j];
			}
		}
		for (int j = 1; j <= sz; j++){
			cnt[b[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << ' ';
	cout << endl;
	return 0;
}
