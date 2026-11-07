#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e5 + 5;
int n,m,a[N],nxt[N],address[N];
int dp[N],du[N],ans[N];
vector <int> g[N];
void topu(){
	queue <int> q;
	for(int i = 1;i <= n;i ++){
		dp[i] = 1;
		if(!du[i])q.push(i);
	}
	while(!q.empty()){
		int x = q.front();q.pop();
		for(int y : g[x]){
			du[y] --;dp[y] += dp[x];
			if(!du[y])q.push(y);
		}
	}
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)cin >> a[i];
	for(int i = n;i >= 1;i --){
		nxt[i] = address[a[i]];
		address[a[i]] = i;
		if(!nxt[i]){
			if(i != n)g[i].push_back(i + 1);
			du[i + 1] ++;
			continue; 
		}
		g[i].push_back(nxt[i]);
		du[nxt[i]] ++;
		
	}
	topu();
	for(int i = 1;i <= n;i ++)if(!nxt[i])ans[a[i]] = dp[i];
	for(int i = 1;i <= m;i ++)cout << ans[i] << ' ';
	return 0;
}
