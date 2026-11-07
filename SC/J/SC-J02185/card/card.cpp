#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out", "w", stdout);
	int n, m; cin >> n >> m;
	vector<bool> exist(m+1,false);
	vector<int> cnt(m+1,0);
	vector<int> card(n);
	for (int i = 0; i < n; i++) cin >> card[i];
	for (int i = 0; i < n; i++){
		stack<int> stk;
		fill(exist.begin(),exist.end(),false);
		for (int j = i; j < n; j++){
			if (exist[card[j]]){
				while (true){
					int t = stk.top(); stk.pop();
					exist[t] = false;
					if (t == card[j]) break;
				}
			}
			stk.push(card[j]);
			exist[card[j]] = true;
		}
		for (int j = 1; j <= m; j++){
			if (exist[j]) cnt[j]++;
		}
	}
	cout << cnt[1];
	for (int i = 2; i <= m; i++) cout << " " << cnt[i];
	return 0;
}