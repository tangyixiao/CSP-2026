#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main(){
	freopen("and.in" , "r" , stdin);
	freopen("and.out" , "w" , stdout);
	int n , m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	long long ans = 0;
	for(int i = 30; i >= 0; i--){
		int cnt = 0;
		for(int j = 1; j <= n; j++){
			if((a[j] & (1 << i)) and ((a[j] & ans) == ans)){
				cnt++;
			}
		}
		if(cnt >= m){
			ans += (1 << i);
		}
	}
	cout << ans;
	return 0;
} 
