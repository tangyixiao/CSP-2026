#include <bits/stdc++.h>
using namespace std;
int a[511111], b[311111], c[311111], d[311111];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			c[j] = 1;
			b[j] = 0;
		}
		for(int j = i; j <= n; j++){
			if(b[a[j]] == 0){
				b[a[j]]++;
			}else{
				for(int k = j-1; k >= i; k--){
					if(c[k] == 0){
						continue;
					}
					if(a[k] == a[j]){
						c[k] = 0;
						break;
					}else{
						b[a[k]]--;
						c[k] = 0;
					}
				}
			}
		}
		for(int j = 1; j <= m; j++){
			if(b[j] == 1){
				d[j]++;
			}
		}
	}
	for(int j = 1; j <= m; j++){
		cout << d[j] << " ";
	}
	return 0;
}
