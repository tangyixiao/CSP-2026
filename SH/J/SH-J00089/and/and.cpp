#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxa = -1;
	cin >> n >> m;
	int a[100005];
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		maxa = max(maxa,a[i]);
	}
	if(m == 1){
		cout << maxa;
		return 0;
	}
	if(m == n){
		int ans = a[1];
		for(int i = 1;i <= n;i++){
			ans = ans & a[i];
		}
		cout << ans;
		return 0;
	}
	if(m == 2){
		int ans = -1;
		for(int i = 1;i <= n;i++){
			for(int j = i+1;j <= n;j++){
				ans = max(ans,a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	return 0;
} 
