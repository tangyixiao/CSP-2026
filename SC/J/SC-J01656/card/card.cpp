#include <bits/stdc++.h>
using namespace std;
int a[300001], b[300001] = {0}, c[300001] = {0};
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	} 
	for (int i = 0; i < n; i++){
		int r = n;
		for (int j = i; j < n; j++){
			bool v = 0;
			for (int e = 0; e < r; e++){
				if (b[e] == a[j]){
					r = e + 1;
					v = 1;
					break; 
				}
			}
			if (!v){
				b[r] =a[j];
				r++;
			}
		}
		for (int j = 0; j < r; j++){
			c[b[j]]++;
		}
		for (int i = 0; i < n; i++){
			b[i] = a[i];
		}
	}
	int x = 0;
	for (int i = 0; i < 300001 && x <= m; i++){
		if (c[i]){
			cout << c[i] << " ";
			x++;
		}
	}
} 
