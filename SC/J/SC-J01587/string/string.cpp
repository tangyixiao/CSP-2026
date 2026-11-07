#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[200005], ans, len;
string s;
char c[200005];
signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i] >> c[i];
		while(a[i]--){
			s += c[i];
		}
	}
	int l = 0, r = s.size() - 1;
	while(l <= r){
		if(s[l] != s[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout << ans;
	return 0;
}