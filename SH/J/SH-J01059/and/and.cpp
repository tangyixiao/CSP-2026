#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	/*
	int a = 3, b = 2, c = 4;// 011 010 100
	int x = a | b | c;
	int y = b | c;
	//y | a = x;
	//y | a = x | a;
	y |= a;
	x |= a;
	cout << x << y;
	*/
	int n, m;
	cin >> n >> m;
	int a[n + 5] = {0};
	for(int i = 1; i <= n; i++) cin >> a[i];
	if(m == 1){
		int ans = 0;
		for(int i = 1; i <= n; i++) ans = max(ans, a[i]);
		cout << ans;
		return 0;
	}
	if(n == m){
		int ans = a[1];
		for(int i = 2; i <= m; i++){
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if(m == 2){
		int ans = 0;
		for(int i = 1; i < n; i++){
			for(int j = i + 1; j <= n; j++){
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	/*if(m == n - 1){
		int ans = a[1];
		for(int i = 2; i <= m; i++){
			ans &= a[i];
		}
	}*/
	int two[26] = {0};
	int ans = 0;
	two[0] = 1;
	for(int i = 1; i <= 25; i++) two[i] = two[i - 1] * 2;
	for(int i = 0; i < two[n]; i++){
		bool ch[31] = {0};
		int cnt = 0, cntt = 0;
		int k = i;
		for(int op = 1; op <= n; op++){
			if(k % 2 == 1){
				ch[++cntt] = 1;
				cnt ++;
			}
			k /= 2;
		}
		if(cnt != m) continue;
		int now, noww;
		for(int i = 1; i <= n; i++){
			if(ch[i] == 1) now = ch[i], noww = i;
		}
		for(int i = noww + 1; i <= n; i++){
			if(ch[i] == 1) now &= ch[i];
		}
		ans = max(ans, now);
	}
	cout << ans;
	return 0;
}
