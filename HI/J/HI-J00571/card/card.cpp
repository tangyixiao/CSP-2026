#include<bits/stdc++.h>
using namespace std;
int m, n, a[100001], b[100001], ans[100001];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - i + 1; j++){
			for(int x = 1; x <= n - i + 1; x++){
			    if(a[j] == b[x]){
			    	for(int y = x; y <= n; y++) b[y] = 0;
				}else{
					b[j] = a[j];
				}
		    }
		}
		for(int j = 1; j <= n; j++){
			for(int x = 1; x <= m; x++){
				if(b[i] == x) ans[x]++;
			}
		} 
	}
	for(int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
