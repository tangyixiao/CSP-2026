#include <bits/stdc++.h>
using namespace std;
int n, m, ans[500005];
int a[500005];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) cin >> a[i];
	for (int i = 1; i <= n; i ++){
		vector<int> tab;
		for (int j = i; j <= n; j ++){
			auto p = find(tab.begin(), tab.end(), a[j]);
			if (p == tab.end()){
				tab.push_back(a[j]);
			} 
			else{
				for (auto i = p; i < tab.end(); i ++){
					tab.erase(i);
				}
				tab.push_back(a[j]);
			}
		}
		for (int j = 0; j < tab.size(); j ++)
		{
			ans[tab[j]] ++;
		}
	}
	for (int i = 1; i <= m; i ++) cout << ans[i] << " ";
	return 0;
}
