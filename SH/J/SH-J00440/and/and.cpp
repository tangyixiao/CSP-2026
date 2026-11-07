#include<bits/stdc++.h>
using namespace std;
int n , m;
int a[200010];
int b[200010] , x = 0;
map<int , bool> mp;
int start = 0;
int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 30; i >= 0; i--){
		int cnt = 0;
		for(int j = 1; j <= n; j++){
			if(a[j] & (1 << i)){
				cnt++;
			}
		}
		if(cnt >= m){
			start = i;
			for(int j = 1; j <= n; j++){
				if(a[j] & (1 << i)){
					mp[a[j]] = true;
				}
			}
			break;
		}
	}
	for(int i = start; i >= 0; i--){
		int cnt = 0;
		for(int j = 1; j <= n; j++){
			if(a[j] & (1 << i) && mp[a[j]]){
				cnt++;
			}
		}
		if(cnt >= m){
			for(int j = 1; j <= n; j++){
				if(!(a[j] & (1 << i)) && mp[a[j]]){
					mp[a[j]] = false;
				}
			}
		}
	}
	int ans = -1;
	for(int i = 1; i <= n; i++){
		if(mp[a[i]]){
			if(ans == -1){
				ans = a[i];
			}else{
				ans &= a[i];
			}
		}
	}
	if(ans == -1)ans = 0;
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
