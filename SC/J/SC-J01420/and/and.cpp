#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a[10005], mx = -1e9;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	if(m == 2){
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				mx = max(mx, (a[i] & a[j]));
			}
		}
	}else if(m == 3){
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				for(int k = j + 1; k <= n; k++){
					mx = max(mx, (a[i] & a[j] & a[k]));
				}
			}
		}
	}else if(m == 4){
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				for(int k = j + 1; k <= n; k++){
					for(int l = k + 1; l <= n; l++){
						mx = max(mx, (a[i] & a[j] & a[k] & a[l]));
					}
				}
			}
		}
	}else if(m == 5){
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				for(int k = j + 1; k <= n; k++){
					for(int l = k + 1; l <= n; l++){
						for(int q = l + 1; q <= n; q++){
							mx = max(mx, (a[i] & a[j] & a[k] & a[l] & a[q]));
						}
					}
				}
			}
		}
	}else if(m == 6){
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				for(int k = j + 1; k <= n; k++){
					for(int l = k + 1; l <= n; l++){
						for(int q = l + 1; q <= n; q++){
							for(int y = q + 1; y <= n; y++){
								mx = max(mx, (a[i] & a[j] & a[k] & a[l] & a[q] & a[y]));
							}
						}
					}
				}
			}
		}
	}
	cout << mx;
	return 0;
}