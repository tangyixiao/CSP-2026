#include <bits/stdc++.h>
using namespace std;

int a[500005], b[500005], c[300005];

int main(){
//	freopen("card.in", "r", stdin);
//	freopen("card.out", "w", stdout);
	int n, m, r = 1;
	bool g = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(a[i] < a[i - 1]){
			g = 1;
		}
	}
	if(g == 0){
		int x = 1;
		for(int i = 2; i <= n; i++){
			if(a[i] != a[i - 1]){
				b[x++] = a[i];
			}
		}
		for(int i = 1; i < x; i++){
			c[b[i]]++;
		}
		for(int i = 1; i <= m; i++){
			cout << c[i] << " ";
		}
		return 0;
	}
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			bool f = 0;
			int q;
			for(int k = 1; k <= j - 1; k++){
				if(a[j] != -1 && b[k] != -1){
					if(a[j] == b[k]){
						f = 1;
						q = k;
						break;
					}
				}
			}
			if(f == 1){
				for(int p = q; p <= j - 1; p++) b[p] = -1;
			}	
			if(a[j] != -1) b[r++] = a[j];
//			cout << i << " ";
//			cout << a[j] << ">>";
//			for(int k = 1; k < r; k++){
//				if(b[k] != -1){
//					cout << b[k] << " ";
//				}
//			}
//			cout << endl;
		}
	}
	for(int i = 1; i < r; i++){
		c[b[i]]++;
	}
	for(int i = 1; i <= m; i++){
		cout << c[i] << " ";
	}
	return 0;
}
