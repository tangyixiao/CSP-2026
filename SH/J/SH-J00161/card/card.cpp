#include <bits/stdc++.h>
using namespace std;
int n, m, a[500001], s[500001];
bool e[500001];
stack < int > stk;
int main(){
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++){
		for (int j = i; j <= n; j++){
			if (e[a[j]]){
				while (stk.top() != a[j]){
					stk.pop();
					e[a[j]] = 0;
				}
			}
			else stk.push(a[j]), e[a[j]] = 1;
		}
		for (int j = 1; j <= m; j++) s[j] += e[a[j]];
		while (!stk.empty()) stk.pop();
		memset(e, 0, sizeof(e));
	}
	for (int i = 1; i <= m; i++) cout << s[i] << " ";
	return 0;
} 
