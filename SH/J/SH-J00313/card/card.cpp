#include <bits/stdc++.h>
using namespace std;

int a[500005], ans[300005];
bool cnt[300005] = {false};

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	
	int k = 0;
	
	for (int i = 1; i <= n; i ++){
		vector<int> table(0);
		for (int j = 1; j <= m; j ++) cnt[j] = false;
		for (int j = i; j <= n; j ++){
			bool flag = false;
			for (k = 0; k < table.size(); k ++){
				if (table[k] == a[j]){
					flag = true;
					break;
				}
			}
			if (flag){
				for (int l = k; l < j; l ++){
					table[l] = 0;
				}
			}
			table.push_back(a[j]);
		}
		for (int j = 0; j < table.size(); j ++){
			cnt[table[j]] = true;
		}
		for (int j = 1; j <= m; j ++){
			if (cnt[j]) ans[j] ++;
		}
	}
	
	for (int i = 1; i <= m; i ++) cout << ans[i] << ' ';
	
	return 0;
} 
