#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, m;
int a[N];
bool b[N][35];
bool vis[N], vis1[N];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		int ls = a[i];
		int pos = 31;
		while(ls){
			if(ls & 1) b[i][pos] = 1;
			pos--;
			ls /= 2;
		}
	}
	int tot = n;
	memset(vis, 1, sizeof vis);
	for(int i = 1; i <= 31; i++){
		for(int j = 1; j <= n; j++) vis1[j] = vis[j];
		int cnt = tot;
		for(int j = 1; j <= n; j++){
			if(!vis1[j]) continue;
			if(!b[j][i]) vis1[j] = 0, cnt--;
		}
		if(cnt >= m){
			for(int j = 1; j <= n; j++)
			    vis[j] = vis1[j];
		    tot = cnt;
		}
		//for(int j = 1; j <= n; j++) cout << vis[j];
		//cout << endl;
	}
	int ans = -1, cnt = m;
	for(int i = 1; i <= n; i++){
		if(vis[i]){
			if(ans == -1) ans = a[i];
			else ans = ans & a[i];
			cnt--; 
		}
		if(cnt == 0) break;
	}
	cout << ans;
	
	return 0;
} 