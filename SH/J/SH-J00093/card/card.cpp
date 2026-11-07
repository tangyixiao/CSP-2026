#include<bits/stdc++.h>
using namespace std;
int a[500010];
int nxt[300010];
int ans[500010];
int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		nxt[a[i]] = i;
	}
	for(int i = 1; i <= n; i++){
		int idx = i;
		while(idx <= n){
			ans[a[idx]]++;
			idx = nxt[a[idx]] + 1;
		}
	}
	for(int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	return 0;
}
