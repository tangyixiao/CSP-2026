#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 500050;
stack<long long> stk;
long long data1[MAXN],t = 1,n,m,answer[MAXN],sum[MAXN],pos[MAXN];
bool flag = true;
bool vis[MAXN];
inline void solve();
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	while (t --){
		solve();
	}
	return 0;
}
inline void solve(){
	cin >> n >> m;
	for (long long i = 1;i <= n;i ++){
		cin >> data1[i];
		if (data1[i] < data1[i - 1]){
			flag = false;
		}
	}
	if (flag && n > 5000){
		for (long long i = n;i >= 1;i --){
			if (!pos[data1[i]]){
				pos[data1[i]] = i;
			}
		}
		for (long long i = 1;i <= m;i ++){
			answer[i] = pos[i];
		}
		for (long long i = 1;i <= m;i ++){
			cout << answer[i] << ' ';
		}
		cout << '\n';
		return ;
	}
	for (long long i = 1;i <= n;i ++){
		for (long long j = i;j <= n;j ++){
			while (vis[data1[j]]){
				vis[stk.top()] = false;
				stk.pop();
			}
			vis[data1[j]] = true;
			stk.push(data1[j]);
		}
		while (!stk.empty()){
			vis[stk.top()] = false;
			answer[stk.top()] ++;
			stk.pop();
		}
	}
	for (long long i = 1;i <= m;i ++){
		cout << answer[i] << ' ';
	}
	cout << '\n';
	return ;
}