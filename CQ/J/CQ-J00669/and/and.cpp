#include<bits/stdc++.h>
#define y yyx
#define w wzy
using namespace std;
const int MAX = 2e5 + 5;
int a[MAX], cnt[53];
string s[MAX];
bool eng[MAX];
long long power(int d, int z){
	int ans = 1;
	for(; z; z >>= 1){
		if(z & 1) ans *= d;
		d *= d;
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		s[i] = "000000000000000000000000000000000";
		cin >> a[i];
		int y = a[i];
		int w = 1;
		while(y != 0){
			if(y % 2 == 1){
				cnt[w]++;
				s[i][w] = '1';
			}
			w++, y /= 2;
		}
	}
	long long ans = 0;
	int out = 0;
	for(int love = 32; love >= 1; love--){
		if(cnt[love] >= m){
			ans += power(2, love - 1);
			for(int i = 1; i <= n && out < n - m; i++){
				if(eng[i] == true) continue;
				if(s[i][love] != '1'){
					eng[i] = true, out++;
					for(int u = love; u >= 1; u--) if(s[i][u] == '1') cnt[u]--;
				}
			}
		}
	}
	cout << ans;
	return 0;
}