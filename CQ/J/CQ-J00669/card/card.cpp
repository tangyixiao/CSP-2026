#include<bits/stdc++.h>
using namespace std;
const int MAX = 5e5 + 5;
vector<int> dp[MAX];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 5);
	vector<int> ans(m + 5, 0);
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = n; i >= 1; i--){
		bool op = true;
		vector<bool> z(30, false);
		for(int j = i; j <= n; j++){
			if(z[a[j]] == true){
				dp[i] = dp[j];
				op = false;
				break;
			}
			z[a[j]] = true;
		}
		if(op) for(int j = 1; j <= 26; j++) if(z[j] == true) dp[i].push_back(j);
		for(int p: dp[i]) ans[p]++;
	}
	for(int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
}
