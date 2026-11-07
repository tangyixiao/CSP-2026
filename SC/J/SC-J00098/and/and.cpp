#include<bits/stdc++.h>
using namespace std;
int n,k,a[10005], ans;
void dfs(int x,int sum,int ad){
	if(sum == k){
		ans = max(ans,ad);
		return;
	}if(x > n) return;
	dfs(x + 1, sum + 1, sum == 0 ? a[x] : (ad & a[x]));
	dfs(x + 1, sum, ad);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	if(k == 1){
		int mx = 0;
		for(int i = 1;i <= n;i++){
			mx = max(mx, a[i]);
		}cout << mx;
		return 0;
	}if(k == 2){
		int mx = 0;
		for(int i = 1;i <= n;i++){
			for(int j = i;j <= n;j++){
				mx = max(mx, a[i] & a[j]);
			}
		}cout << mx;
		return 0;
	}
	if(k == n){
		int al = a[1];
		for(int i = 2;i <= n;i++){
			al = al & a[i];
		}cout << al;
		return 0;
	}
	dfs(1, 0, 0);
	cout << ans;
	return 0;
} 