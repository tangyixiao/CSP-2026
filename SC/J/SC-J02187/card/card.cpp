#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 5;

int a[N], z[N], t[N];

signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m, ok = 1;
	cin >> n >> m;
	a[0] = -1;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(a[i] < a[i - 1]) ok = 0;
	}
	if(ok == 1){
		for(int i = 1; i <= n; i++){
			if(a[i] != a[i - 1]){
				t[a[i - 1]] += i - 1;
			}
			if(i == n) t[a[i]] += n;
		}
		for(int i = 1; i <= m; i++){
			if(t[i] == 0) continue;
			else cout << t[i] << ' ';
		}
		return 0;
	}
	for(int i = 1; i <= n; i++){
		int s = 1, ans = 0;
		memset(z, 0, sizeof z);
		for(int j = i; j <= n; j++){
			for(int k = 1; k <= s; k++){
				if(z[k] == a[j]){
					s -= s - k;
				}
			}
			z[s] = a[j];
			s++;
		}
		for(int j = 1; j <= s - 1; j++){
			t[z[j]]++;
		}
	}
	for(int i = 1; i <= m; i++) cout << t[i] << ' ';
	return 0;
}