#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, m, ans;
bool vis[N];
int dis[N];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> dis[i];
	}
	for(int i = 30;i >= 0;i--){
		queue<int> q;
		int t = (1 << i), cnt = 0;
		for(int j = 1;j <= n;j++){
			if(dis[j] >= t && vis[j] == 0){
				dis[j] -= t;
				cnt ++;
			}
			else
				q.push(j);
		}
		if(cnt >= m){
			while(!q.empty())
				vis[q.front()] = 1, q.pop();
			ans += (1 << i);
		}
	}
	cout << ans;
	return 0;
}