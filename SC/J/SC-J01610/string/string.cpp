#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	char s[1000010];
	long long cnt = 1;
	for(int i = 1; i <= n; i++){
		int q;
		char c;
		cin >> q >> c;
		for(int j = 1; j <= q; j++){
			s[cnt] = c;
			cnt++;
		}
	}
	
	/*
	for(int i = 1; i <= cnt; i++){
	cout << s[i];
	}
	cout << endl;
	*/
	
	int l = 1, r = cnt;
	r--;
	int ans = 0;
	while(l < r){
		if(s[l] != s[r]){
			ans += 1;
			// cout << s[l] << " " << s[r] << endl;
			s[r] = s[l];
		}
		l++;
		r--;
	}
	cout << ans;
	return 0;
}