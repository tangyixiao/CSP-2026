#include<bits/stdc++.h>
using namespace std;
long long cnt[200010];
char c[200010];
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> cnt[i] >> c[i];
	}
	long long ans = 0;
	int l = 1 , r = n;
	while(l < r){
		if(cnt[l] > cnt[r]){
			cnt[l] -= cnt[r];
			if(c[l] != c[r]) ans += cnt[r];
			r--;
		} else if(cnt[l] < cnt[r]){
			cnt[r] -= cnt[l];
			if(c[l] != c[r]) ans += cnt[l];
			l++;
		} else {
			if(c[l] != c[r]) ans += cnt[l];
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}
