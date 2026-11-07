#include<bits/stdc++.h>
using namespace std;
int a[200005], cnt[25], lg2[1500005];
bool used[25];
bool kkkk2(int x){
	for(int bit = 0; bit <= 20; bit++){
		if(x == (1 << bit)) return 1;
	}
	return 0;
}
bool iiii1(int n){
	for(int i = 1; i <= n; i++){
		if(a[i] != i - 1) return 0;
	}
	return 1;
} 
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	if(n <= 20){ // 1~5
		int ans = 0;
		for(int i = 0; i < (1 << n); i++){
			memset(used, 0, sizeof(used));
			int cnt = 0;
			for(int j = 0; j < n; j++){
				if(i & (1 << j)){
					used[j + 1] = 1;
					cnt++;
				}
			}
			if(cnt == m){
				int res;
				for(int i = 1; i <= n; i++){
					if(used[i]){
						res = a[i];
						break;
					}
				}
				for(int i = 1; i <= n; i++){
					if(used[i]){
						res &= a[i];
					}
				}
				ans = max(ans, res);
			}
		}
		cout << ans;
	}else if(n <= 2000){ // 6~10
		if(m == 1){ // 6
			sort(a + 1, a + n + 1, greater<int>());
			cout << a[1];
		}else if(m == n){ // 7
			int res = a[1];
			for(int i = 2; i <= n; i++){
				res &= a[i];
			}
			cout << res;
		}else if(m == 2){ // 8~10
			int ans = 0;
			for(int i = 1; i <= n; i++){
				for(int j = i + 1; j <= n; j++){
					ans = max(ans, a[i] & a[j]);
				}
			}
			cout << ans;
		}
	}else{ // 13~15
		if(kkkk2(n) && iiii1(n)){ // 14~15
			int ans = 0;
			while(m <= n / 2){
				n /= 2;
				ans += n;
			}
			cout << ans;
		}else{ // 13
			for(int i = 1; i <= (1 << 20); i++){
				lg2[i] = lg2[i >> 1] + 1;
			}
			for(int i = 1; i <= n; i++){
				cnt[lg2[a[i] + 1]]++;
			}
			bool flag = 1; 
			for(int bit = 22; bit >= 0; bit--){
				if(cnt[bit] >= m){
					cout << (1 << bit) - 1;
					flag = 0;
					break;
				}
			}
			if(flag) cout << 0;
		}
	}
}
/*
LUOGU UID 1549034.

ίχίχίχ. 
*/ 
