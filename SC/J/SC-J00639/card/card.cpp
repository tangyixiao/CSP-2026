#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 10;
const int maxm = 3e5 + 10;
int a[maxn], ans[maxm];
vector<int> table;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int now = 1; now <= n; now++){
		int waste = 0;
		for(int i = now; i <= n; i++){
			int now_card = a[i];
			int put = 1;
			for(int j = 0; j < (int)table.size(); j++){
				if(now_card == table[j]){
					put = 2;
				}
			}
			table.push_back(now_card);
			if(put == 2){
				waste = table.size();
			}
		}
		for(int j = waste; j < (int)table.size(); j++){
			ans[table[j]]++;
		}
	}
	for(int i = 1; i <= m; i++){
		cout << ans[i] << " ";
	}
	return 0;
}