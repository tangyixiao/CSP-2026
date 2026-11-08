#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n, m;
int a[N];
int tab[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (tab[j] == a[i]) {
				for (int k = j; k <= n; k++) {
					tab[k] = 0;
				}
            }
		}
		tab[i] = a[i];
	}
	
	return 0;
}

