#include<iostream>
#include<iomanip> 
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int n , m; cin >> n >> m;
	vector<int>nums(n) ; vector<int> sum(m+1);
	for (int i = 0;i < n; ++i) cin >> nums[i];
	for (int u = 0;u < n; ++ u) {
		vector<int> card;
		for (int i = u;i < n; ++ i) {
			vector<int> new_card;
			int t = 0;
			if (card.size() > 0) {
				for(;card[t] != nums[i] && t < card.size(); ++t);
				if (card[t] == nums[i]) {
					for (int j = 0;j < t; ++j) new_card.push_back(card[j]);
					card = new_card;
				}		
			}
			card.push_back(nums[i]);
		}	
		vector<bool> tt(m + 1 , false);
		for (int k = 0;k < card.size(); ++ k) {
			if (!tt[card[k]]) ++sum[card[k]] , tt[card[k]] = true;
		}	
	}
	for (int i = 1;i <= m; ++i) cout << sum[i] << " ";
	return 0; 
} 
/*
4 3 
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
