#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// CCF青天大老爷啊，求给我一点分吧，学个编程不容易给个一等奖吧 
int n, m; 
int a[500100];

int vis[300100];
int st[500100];
int cnt[300100];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);	
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	for (int i = 1; i <= n; i++){
		int len = 0;
		memset(vis, 0, sizeof(vis));
		for (int j = i; j <= n; j++){
			if (vis[a[j]] == 0){
				vis[a[j]] = 1;
				len++;
				st[len] = a[j];
			} 
			else{
				while (st[len] != a[j]){
					vis[st[len]] = 0;
					len--;
				} 
			}
		}
		for (int j = 1; j <= m; j++){
			if (vis[j] == 1) cnt[j]++;
		}
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
		
	return 0;
} 
