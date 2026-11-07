#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5; 
int n,m;
long long a[N];
int g[N][40];
long long ans;
int vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	for(int i = 1;i <= n;i++){
		long long num = a[i];
		int pos = 31;
		while(num and pos > 0) 
			g[i][pos--] = num & 1,num >>= 1;
	}
	int pos,tcnt;
	for(int i = 1;i <= 31;i++){
		int cnt = 0;
		for(int j = 1;j <= n;j++) cnt += g[j][i];
		if (cnt >= m) {
			pos = 1 + i;
			tcnt = cnt;
			for(int j = 1;j <= n;j++) vis[j] = g[j][i];
			ans += 1 << 31 - i;
			break;
		}
	}
	for(;pos <= 31;pos++){
		int cnt = 0;
		for(int i = 1;i <= n;i++){
			if (!vis[i]) continue;
			cnt += g[i][pos];
		} 
		if (cnt >= m){
			ans += 1 << 31 - pos;
			for(int i = 1;i <= n;i++){
				if (!vis[i]) continue;
				vis[i] = g[i][pos];
			}
		}
	}
	cout << ans;
	return 0;
}
