#include <bits/stdc++.h>
using namespace std;

int a[200005], b[200005][40], c[40], k = 1;

int f(int a[], int b[]){
	for(int i = 1; i <= 40; i++){
		if(a[i] == b[i]){
			a[i] = 0;
			b[i] = 0;
		}
	}
	int x, y;
	for(int i = 1; i <= 40; i++){
		if(a[i] != b[j]){
			x = i;
			break;
		}
	}
	for(int i = 40; i >= 1; i--){
		if(a[i] != b[j]){
			y = i;
			break;
		}
	}
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		int p = a[i];
		while(p > 0){
			c[k++] = n % 2;
			n /= 2;
		}
		reverse(c + 1, c + k);
		for(int j = 1; j < k; j++){
			b[i][j] = c[j];
		}
		k = 1;
	}
	return 0;
}
