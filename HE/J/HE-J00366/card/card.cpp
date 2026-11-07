#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 5010;
int n, m, c[N], cnt[N];

int main(){
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) cin >> c[i];
	for (int d = 1; d <= n; d ++){
		stack<int> stk;
		int st[N]; 
		for (int i = d; i <= n; i ++){
			int cur = c[i];
			if (st[cur] == 1){
				while (stk.top() != cur) st[stk.top()] = 0, stk.pop();
			}else stk.push(cur), st[cur] = 1;
		}
		while (!stk.empty()){
			int cur = stk.top(); stk.pop();
			cnt[cur] ++;
		}
	}
	for (int i = 1; i <= m; i ++) cout << cnt[i] << ' ';
	
	return 0;
}
