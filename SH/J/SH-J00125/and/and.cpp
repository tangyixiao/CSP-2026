#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k,s[200010],num[200010][31],nw,t[31],last,ans[200010];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int a = 1;a <= n;a++){
		cin >> s[a];
		int k = s[a];
		nw = 0;
		while(k){
			num[a][nw] = k % 2;
			t[nw] += k % 2;
			k /= 2;
			nw++;
		}
	}
	for(int a = 30;a >= 0;a--){
		if(t[a] >= m){
			for(int b = 1;b <= n;b++){
				if(ans[b] == 1) continue;
				if(num[b][a] == 0){
					ans[b] = 1;
					for(int c = a - 1;c >= 0;c--) t[c] -= num[b][c];
				}
			}
		}
	}
	int out = (1 << 30) - 1;
	k = 0;
	for(int a = 1;a <= n;a++){
		if(k < m && ans[a] == 0){
			out = out & s[a];
			k++;
		}
	}
	cout << out;
	return(0);
} 
