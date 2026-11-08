#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int s[N];
int list_[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >>m;
	for (int i = 1; i <= n; i++) {
		cin >>s[i];
	}
	for (int i = 1; i <= n; i++) {
		int table[N];
		for (int f = 1; f <= n; f++){
			table[f] = 0;
		}
		int cnt = 1;
		for (int j = i; j <= n; j++){
			table[cnt] = s[j];
			for (int k = 1; k < cnt; k++) {
				if (table[k] == table[cnt]) {
					for (int t = k; t < cnt; t++) {
						table[t] = -100;
					}
					break;
				} 
			}
			cnt++;
		}
		for (int x = 1; x <= cnt; x++) {
			if (table[x] != -100) {
				list_[table[x]]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout <<list_[i] <<" ";
	}
	return 0;
} 
