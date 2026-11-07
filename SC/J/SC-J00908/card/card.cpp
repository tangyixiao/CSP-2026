#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
const int M = 3e5+5;
int n,m;
int a[N];
int nxt[N];
int pos[M];
int to[N][2];
int in[N];
queue<int> q;
int cnt[N],out[M];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		cnt[i] = 1;
	}
	for(int i=n; i>=1; i--){
		nxt[i] = pos[a[i]];
		if(nxt[i]){
			if(nxt[i]!=n){
				to[i][0] = nxt[i];
				to[i][1] = 0;
				in[nxt[i]]++;
			}
		}else{
			if(i!=n){
				to[i][0] = i+1;
				to[i][1] = 1;
				in[i+1]++;
			}
		}
		pos[a[i]] = i;
	}
	for(int i=1; i<=n; i++){
		if(!in[i]){
			q.push(i);
		}
	}
	while(q.size()){
		int u = q.front();
		q.pop();
		if(to[u][0]){
			cnt[to[u][0]] += cnt[u];
			if(!to[u][1]){
				cnt[u] = 0;
			}
			in[to[u][0]]--;
			if(!in[to[u][0]]) q.push(to[u][0]);
		}
	}
	for(int i=1; i<=n; i++){
		out[a[i]] += cnt[i];
	}
	for(int i=1; i<=m; i++){
		cout << out[i];
		if(i!=m) cout << ' ';
	}
	return 0;
}